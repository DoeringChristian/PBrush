#pragma once
#ifndef LAYER_PAINT_H
#define LAYER_PAINT_H

#include "layer.h"
#include "texture.h"

static const float layer_paint_verts[] = {
    0.0, 0.0,  0.0, 0.0,
    0.0, 1.0,  0.0, 1.0,
    1.0, 1.0,  1.0, 1.0,
    1.0, 0.0,  1.0, 0.0,
};

static const uint32_t layer_paint_ind[] = {
    0, 1, 2,
    2, 3, 0,
};

enum layer_paint_type{
    LAYER_PAINT_TYPE_EMPTY,
    LAYER_PAINT_TYPE_IMG,
};

struct layer_paint{
    struct layer interface;

    uint32_t gl_vao;
    uint32_t gl_buffer;
    uint32_t gl_ibo;

    struct vect2z size;
    struct vect2f pos;
    float scale;

    uint8_t realized;

    struct texture tex;

    enum layer_paint_type type;

    char *path;
};

struct layer_paint *layer_paint_init(struct layer_paint *dst, struct canvas *canvas, struct vect2z size, struct vect2f pos, float scale);
struct layer_paint *layer_paint_img_load(struct layer_paint *dst, const char *path, struct canvas *canvas, struct vect2f pos, float scale);
int layer_paint_free(struct layer *inf);
int layer_paint_render(struct layer *inf);
int layer_paint_realize(struct layer *inf);

static struct layer_ops layer_paint_ops = {
    .free = layer_paint_free,
    .render = layer_paint_render,
    .realize = layer_paint_realize,
};

#endif //LAYER_PAINT_H
