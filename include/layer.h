#pragma once
#ifndef LAYER_H
#define LAYER_H

#include <stddef.h>
#include <stdint.h>
#include "defines.h"
#include "canvas.h"


struct layer_ops;

struct layer{
    struct layer_ops *ops;

    struct canvas *canvas;
};

struct layer_ops{
    int (*free)(struct layer *dst);
    int (*render)(struct layer *dst);
    int (*realize)(struct layer *dst);
};

static inline int layer_free(struct layer *dst){
    if(dst->ops != NULL && dst->ops->free != NULL)
        return dst->ops->free(dst);
    return STD_RETURN_NOFUNC;
}

static inline int layer_render(struct layer *dst){
    if(dst->ops != NULL && dst->ops->render != NULL)
        return dst->ops->render(dst);
    return STD_RETURN_NOFUNC;
}
static inline int layer_realize(struct layer *dst){
    if(dst->ops != NULL && dst->ops->realize != NULL)
        return dst->ops->realize(dst);
    return STD_RETURN_NOFUNC;
}


#endif //LAYER_H
