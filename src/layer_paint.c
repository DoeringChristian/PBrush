#include "layer_paint.h"


struct layer_paint *layer_paint_init(struct layer_paint *dst, struct canvas *canvas, struct vect2z size, float scale){
    dst->interface.ops = &layer_paint_ops;
    dst->interface.canvas = canvas;
    dst->realized = 0;
    dst->scale = scale;
    dst->size = size;

    // TODO init


    return dst;
}
int layer_paint_free(struct layer *inf){
    // TODO free
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

    glBindVertexArray(pl->gl_vao);
    glBindBuffer(GL_ARRAY_BUFFER, pl->gl_buffer);

    glDrawArrays(GL_TRIANGLES, 0, 6);

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

    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, NULL);
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    g_print("layer_realized\n");

    dst->realized = 1;
    return 1;
}
