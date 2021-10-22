#version 330

in vec2 tex_co;

out vec4 color;

uniform sampler2D u_tex;

void main (void){
    color = texture(u_tex, tex_co);
    //color = vec4(1.0, 0.0, 0.0, 0.5);
}
