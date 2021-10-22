#ifndef SHADER_H
#define SHADER_H

#include <gtk/gtk.h>
#include <epoxy/gl.h>

struct shader{
    GLuint index;
    int shader_type;
};

struct shader *shader_init(struct shader *dst, const char *path, int shader_type);
void shader_free(struct shader *dst);

#endif //SHADER_H
