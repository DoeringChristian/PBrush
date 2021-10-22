#ifndef VERT_H
#define VERT_H

#include "vect.h"

struct vert2{
    struct vect2f pos;
};

static inline struct vert2 vert2(struct vect2f pos){
    return (struct vert2){.pos = pos};
}

#endif //VERT_H
