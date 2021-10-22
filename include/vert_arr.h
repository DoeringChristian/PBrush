#ifndef VERT_ARR_H
#define VERT_ARR_H

#include <stdint.h>
#include <epoxy/gl.h>

struct vert_arr{
    uint32_t gl_vao;
};

struct vert_arr *vert_arr_init(struct vert_arr *dst);
void vert_arr_free(struct vert_arr *dst);

#endif //VERT_ARR_H
