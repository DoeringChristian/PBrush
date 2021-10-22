#version 330

layout(location = 0) in vec2 pos;

uniform vec2 u_size;
uniform float u_scale;
uniform vec2 u_win_size;

void main (void){
    vec2 pos_s = vec2(pos.x * u_size.x * u_scale / u_win_size.x, pos.y * u_size.y * u_scale / u_win_size.y);
    gl_Position = vec4(pos_s, 0.0, 1.0);
}
