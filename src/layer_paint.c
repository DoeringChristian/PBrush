#include "layer_paint.h"


struct layer_paint *layer_paint_init(struct layer_paint *dst, struct canvas *canvas, struct vect2z size, struct vect2f pos, float scale){
    dst->interface.ops = &layer_paint_ops;
    dst->interface.canvas = canvas;
    dst->realized = 0;
    dst->scale = scale;
    dst->size = size;
    dst->pos = pos;
    dst->type = LAYER_PAINT_TYPE_EMPTY;
    dst->path = NULL;

    // TODO init


    return dst;
}

struct layer_paint *layer_paint_img_load(struct layer_paint *dst, const char *path, struct canvas *canvas, struct vect2f pos, float scale){
    dst->interface.ops = &layer_paint_ops;
    dst->interface.canvas = canvas;
    dst->realized = 0;
    dst->scale = scale;
    dst->size = vect2z(0,0);
    dst->pos = pos;
    dst->type = LAYER_PAINT_TYPE_EMPTY;
    size_t path_size = strlen(path)+1;
    dst->path = malloc(path_size);
    memcpy(dst->path, path, path_size);
    dst->type = LAYER_PAINT_TYPE_IMG;
    return dst;
}

int layer_paint_free(struct layer *inf){
    // TODO free
    struct layer_paint *dst = (struct layer_paint *)inf;
    free(dst->path);
    texture_free(&dst->tex);
    glDeleteVertexArrays(1, &dst->gl_vao);
    glDeleteBuffers(1, &dst->gl_buffer);
    return 1;
}
int layer_paint_render(struct layer *inf){
    // TODO render
    
    struct layer_paint *pl = (struct layer_paint *)inf;

    int location = 0;

    location = glGetUniformLocation(inf->canvas->program.gl_program, "u_size");
    glUniform2f(location, pl->size.x, pl->size.y);

    location = glGetUniformLocation(inf->canvas->program.gl_program, "u_scale");
    glUniform1f(location, pl->scale * inf->canvas->scale);

    location = glGetUniformLocation(inf->canvas->program.gl_program, "u_win_size");
    glUniform2f(location, inf->canvas->win_size.x, inf->canvas->win_size.y);

    location = glGetUniformLocation(inf->canvas->program.gl_program, "u_pos");
    glUniform2f(location, pl->pos.x, pl->pos.y);


    glBindVertexArray(pl->gl_vao);
    glBindBuffer(GL_ARRAY_BUFFER, pl->gl_buffer);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, pl->gl_ibo);

    texture_bind(&pl->tex, 0);

    location = glGetUniformLocation(inf->canvas->program.gl_program, "u_tex");
    glUniform1i(location, 0);

    //glDrawArrays(GL_TRIANGLES, 0, 6);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, NULL);

    texture_unbind(&pl->tex);

    g_print("layer_rendered\n");

    return 0;
}
int layer_paint_realize(struct layer *inf){
    struct layer_paint *dst = (struct layer_paint *)inf;
    if(dst->realized)
        return 0;
    
    glGenVertexArrays(1, &dst->gl_vao);
    glBindVertexArray(dst->gl_vao);

    glGenBuffers(1, &dst->gl_buffer);
    glBindBuffer(GL_ARRAY_BUFFER, dst->gl_buffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(layer_paint_verts), layer_paint_verts, GL_STATIC_DRAW);

    glGenBuffers(1, &dst->gl_ibo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, dst->gl_ibo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(layer_paint_ind), layer_paint_ind, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 4, (const void *)0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 4, (const void *)(sizeof(float) * 2));

    switch(dst->type){
    case LAYER_PAINT_TYPE_EMPTY:
        texture_init(&dst->tex, dst->size.x, dst->size.y);
        break;
    case LAYER_PAINT_TYPE_IMG:
        texture_open(&dst->tex, dst->path);
        dst->size.x = dst->tex.w;
        dst->size.y = dst->tex.h;
        break;
    }

    glBindBuffer(GL_ARRAY_BUFFER, 0);

    g_print("layer_realized\n");

    dst->realized = 1;
    return 1;
}
