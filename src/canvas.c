#include "canvas.h"


struct canvas *canvas_init(struct canvas *dst, struct vect2z size, float scale, GtkWidget *glarea){
    dst->glarea = glarea;
    dst->size = size;
    dst->scale = scale;
    dst->win_size = vect2z(0,0);
    darray_init(&dst->layers, 10);

    return dst;
}
int canvas_free(struct canvas *dst){
    for(size_t i = 0;i < darray_size(&dst->layers);i++){
        layer_free(dst->layers[i]);
        //free(dst->layers[i]);
    }
    darray_free(&dst->layers);
    //program_free(&dst->program);
    return 0;
}
int canvas_render(struct canvas *dst){

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_BLEND);

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0, 0, 0, 1);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    //glUseProgram(dst->gl_program);
    program_use(&dst->program);

    // draw layers.
    for(size_t i = 0;i < darray_size(&dst->layers);i++){
        layer_render(dst->layers[i]);
    }

    glBindVertexArray(0);
    glUseProgram(0);

    return 1;

#if 0
    for(size_t i = 0;i < darray_size(&dst->layers);i++){
        layer_render(dst->layers[i]);
    }
#endif
}
int canvas_push_layer(struct canvas *dst, struct layer *src, size_t index){
    layer_realize(src);
    return darray_push(&dst->layers, src, index);
}
int canvas_pop_layer(struct canvas *dst, size_t index){
    return darray_pop(&dst->layers, index);
}
int canvas_realize(struct canvas *dst){
    int status = 0;

    struct shader vert;
    struct shader frag;

    if(!shader_init(&vert, vert_src_path, GL_VERTEX_SHADER))
        return 0;
    if(!shader_init(&frag, frag_src_path, GL_FRAGMENT_SHADER))
        return 0;

    program_init(&dst->program);

    program_attach(&dst->program, &vert);
    program_attach(&dst->program, &frag);

    program_link(&dst->program);

    // cleanup

    program_detatch(&dst->program, &vert);
    program_detatch(&dst->program, &frag);

    shader_free(&vert);
    shader_free(&frag);

    // realize layers.
    for(size_t i = 0;i < darray_size(&dst->layers);i++){
        layer_realize(dst->layers[i]);
    }

    g_print("realized\n");

    return 1;
}
