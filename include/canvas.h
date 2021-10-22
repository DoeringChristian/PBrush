#pragma once
#ifndef CANVAS_H
#define CANVAS_H

#include <epoxy/gl.h>
#include <gtk/gtk.h>
#include "darray.h"
#include "layer.h"
#include "shader.h"
#include "vect.h"
#include "program.h"

static const char vert_src_path[] = "shaders/vertex.glsl";
static const char frag_src_path[] = "shaders/fragment.glsl";
static const float verts[] = {
    -1.0, -1.0,
    1.0, -1.0,
    -1.0, 1.0,

#if 0
    1.0, -1.0,
    -1.0, 1.0,
    1.0, 1.0,
#endif
};

struct canvas{
    darray(struct layer *) layers;
    
    GtkWidget *glarea;

    GLuint frag_shader, vert_shader;
    GLuint gl_buffer;
    GLuint gl_vao;

    struct program program;

    struct vect2z size;
    struct vect2z win_size;
    float scale;
};

struct canvas *canvas_init(struct canvas *dst, struct vect2z size, float scale, GtkWidget *glarea);
int canvas_free(struct canvas *dst);
int canvas_realize(struct canvas *dst);
int canvas_render(struct canvas *dst);

int canvas_push_layer(struct canvas *dst, struct layer *src, size_t index);
int canvas_pop_layer(struct canvas *dst, size_t index);

#endif //CANVAS_H
