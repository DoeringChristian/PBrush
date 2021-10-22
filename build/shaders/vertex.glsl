#version 330

layout(location = 0) in vec2 pos;
layout(location = 1) in vec2 i_tex_co;

out vec2 tex_co;

uniform vec2 u_size;
uniform float u_scale;
uniform vec2 u_win_size;
uniform vec2 u_pos;

void main (void){
    vec2 pos_v = pos;
    pos_v = vec2(pos_v.x * u_size.x * u_scale / u_win_size.x, pos_v.y * u_size.y * u_scale / u_win_size.y);
    pos_v += vec2(u_pos.x / u_win_size.x, u_pos.y / u_win_size.y);
    gl_Position = vec4(pos_v, 0.0, 1.0);
    tex_co = i_tex_co;
}
