#version 410 core
uniform vec4 ourColour;
out vec4 frag_colour;
void main() {
frag_colour = ourColour;
}