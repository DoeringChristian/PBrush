#pragma once
#ifndef SHADER_UTIL_H
#define SHADER_UTIL_H

#include <epoxy/gl.h>
#include <gtk/gtk.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>


struct shader_util{
    GLuint vertex_shader, fragment_shader;
};

GLuint shader_util_create(const char *src, int type);
struct shader_util shader_util_load(const char *vertex_path, const char *fragment_path);

#endif //SHADER_UTIL_H
