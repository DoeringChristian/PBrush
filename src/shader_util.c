#include "shader_util.h"


GLuint shader_util_create(const char *src, int type){
    GLuint shader;
    int status;
    shader = glCreateShader(type);

    glShaderSource(shader, 1, &src, NULL);

    glCompileShader(shader);

    glGetShaderiv(shader, GL_COMPILE_STATUS, &status);

    if(status == GL_FALSE){
        int log_len;
        char *buffer;
        glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &log_len);
        buffer = malloc(log_len + 1);
        memset(buffer, 0, log_len+1);
        glGetShaderInfoLog(shader, log_len, NULL, buffer);
        g_warning ("Compile failure in %s shader:\n%s",
                type == GL_VERTEX_SHADER ? "vertex" : "fragment",
                buffer);
        free(buffer);
        glDeleteShader(shader);
        return 0;
    }
    return shader;
}

struct shader_util shader_util_load(const char *vertex_path, const char *fragment_path){
    struct shader_util ret = {.vertex_shader = 0, .fragment_shader = 0};

    FILE *vertex_fp;
    FILE *fragment_fp;
    vertex_fp = fopen(vertex_path, "r");
    fragment_fp = fopen(fragment_path, "r");

    size_t vertex_size, fragment_size;
    fseek(vertex_fp, 0l, SEEK_END);
    fseek(fragment_fp, 0l, SEEK_END);
    vertex_size = ftell(vertex_fp);
    fragment_size = ftell(fragment_fp);
    rewind(vertex_fp);
    rewind(fragment_fp);

    uint8_t vertex_buf[vertex_size+1];
    uint8_t fragment_buf[fragment_size+1];

    int read = 0;
    read = fread(vertex_buf, 1, vertex_size, vertex_fp);
    if(read == 0)
        return ret;
    read = fread(fragment_buf, 1, fragment_size, fragment_fp);
    if(read == 0)
        return ret;
    
    vertex_buf[vertex_size] = 0;
    fragment_buf[fragment_size] = 0;

    ret.vertex_shader = shader_util_create((char *)vertex_buf, GL_VERTEX_SHADER);
    ret.fragment_shader = shader_util_create((char *)fragment_buf, GL_FRAGMENT_SHADER);

    fclose(vertex_fp);
    fclose(fragment_fp);

    return ret;
}
