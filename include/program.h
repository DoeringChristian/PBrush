#ifndef PROGRAM_H
#define PROGRAM_H

#include <gtk/gtk.h>
#include <epoxy/gl.h>
#include <stdint.h>
#include "shader.h"

struct program{
    uint32_t gl_program;
};

struct program *program_init(struct program *dst);
void program_free(struct program *dst);
int program_attach(struct program *dst, struct shader *src);
int program_detatch(struct program *dst, struct shader *src);
int program_link(struct program *dst);
int program_use(struct program *dst);


#endif //PROGRAM_H
