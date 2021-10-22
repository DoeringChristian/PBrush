#ifndef TRI_H
#define TRI_H

#include "vert.h"
#include <epoxy/gl.h>
#include <stdint.h>

struct tri{
    struct vert2 v1, v2, v3;
};

static inline struct tri tri(struct vert2 v1, struct vert2 v2, struct vert2 v3){
    return (struct tri){.v1 = v1, .v2 = v2, .v3 = v3};
}



#endif //TRI_H
