#pragma once
#ifndef LAYER_PAINT_H
#define LAYER_PAINT_H

#include "layer.h"

static const float layer_paint_verts[] = {
    -1.0, -1.0,
    1.0, -1.0,
    -1.0, 1.0,

    1.0, -1.0,
    -1.0, 1.0,
    1.0, 1.0,
};

struct layer_paint{
    struct layer interface;

    uint32_t gl_vao;
    uint32_t gl_buffer;

    struct vect2z size;
    float scale;

    uint8_t realized;
};

struct layer_paint *layer_paint_init(struct layer_paint *dst, struct canvas *canvas, struct vect2z size, float scale);
int layer_paint_free(struct layer *inf);
int layer_paint_render(struct layer *inf);
int layer_paint_realize(struct layer *inf);

static struct layer_ops layer_paint_ops = {
    .free = layer_paint_free,
    .render = layer_paint_render,
    .realize = layer_paint_realize,
};

#endif //LAYER_PAINT_H
