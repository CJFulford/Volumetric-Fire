#version 430 core

layout (location = 0) in vec3 position;
layout (location = 1) in vec3 normal;
layout (location = 2) in vec3 velocity;

out vec3 vert;
out vec3 norm;
out vec3 vel;

void main (void)
{
	norm = normal;
	vel = velocity;
	vert = position.xyz;

    gl_Position = vec4(vert, 1.f);
}
