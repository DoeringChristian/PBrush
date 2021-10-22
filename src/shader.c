#include "shader.h"

struct shader *shader_init(struct shader *dst, const char *path, int shader_type){
    dst->shader_type = shader_type;

    FILE *fp = fopen(path, "r");
    if(fp == NULL)
        return NULL;
    size_t src_size;
    char *src;
    int status;

    fseek(fp, 0, SEEK_END);
    src_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    src = malloc(sizeof(*src) * src_size + 1);

    fread(src, 1, src_size, fp);

    src[src_size+1] = 0;

    dst->index = glCreateShader(shader_type);
    glShaderSource(dst->index, 1, (const char **)&src, NULL);
    glCompileShader(dst->index);

    glGetShaderiv(dst->index, GL_COMPILE_STATUS, &status);
    if(status == GL_FALSE){
        int log_len;
        glGetShaderiv(dst->index, GL_INFO_LOG_LENGTH, &log_len);

        char buf[log_len + 1];
        glGetShaderInfoLog(dst->index, log_len, NULL, buf);

        g_print("Compilation failure in %s shader: %s", shader_type == GL_VERTEX_SHADER ? "vertex" : "fragment", buf);

        glDeleteShader(dst->index);
        dst->index = 0;
        free(src);
        return NULL;
    }

    free(src);
    return dst;
}
void shader_free(struct shader *dst){
    if(dst->index != 0)
        glDeleteShader(dst->index);
}
