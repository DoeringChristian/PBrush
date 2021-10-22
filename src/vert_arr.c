#include "vert_arr.h"

struct vert_arr *vert_arr_init(struct vert_arr *dst){
    glGenVertexArrays(1, &dst->gl_vao);
    return dst;
}
void vert_arr_free(struct vert_arr *dst){
    glDeleteVertexArrays(1, &dst->gl_vao);
}
