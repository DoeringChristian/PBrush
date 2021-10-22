#include "program.h"

struct program *program_init(struct program *dst){
    dst->gl_program = glCreateProgram();
    return dst;
}
void program_free(struct program *dst){
    glDeleteProgram(dst->gl_program);
}
int program_attach(struct program *dst, struct shader *src){
    glAttachShader(dst->gl_program, src->index);
    return 1;
}
int program_link(struct program *dst){
    int status;
    glLinkProgram(dst->gl_program);
    glValidateProgram(dst->gl_program);

    glGetProgramiv(dst->gl_program, GL_LINK_STATUS, &status);
    if(status == GL_FALSE){
        int log_len = 0;
        glGetProgramiv(dst->gl_program, GL_INFO_LOG_LENGTH, &log_len);

        char buf[log_len + 1];
        glGetProgramInfoLog(dst->gl_program, log_len, NULL, buf);

        g_print("Linking failure in program: %s", buf);

        glDeleteProgram(dst->gl_program);
        dst->gl_program = 0;
        return 0;
    }
    return 1;
}
int program_use(struct program *dst){
    glUseProgram(dst->gl_program);
}
int program_detatch(struct program *dst, struct shader *src){
    glDetachShader(dst->gl_program, src->index);
}
