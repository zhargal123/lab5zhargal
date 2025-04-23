#ifndef SHADER_H
#define SHADER_H

#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <glm.hpp>
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtc/type_ptr.hpp"
#include <stdio.h>
#include <stdlib.h>

char* readShaderSrc(const char* filePath); // ������ �����

GLuint compShader(GLenum shadType, const char* src); // ���������� ��������

GLuint createShader(const char* vertex, const char* fragment, GLint* time_location); // �������� ��������

void setUniform(GLuint prog, const char* name, float r, float g, float b, float a); // uniform ����������

void setUniformMat(GLuint prog, const char* name, glm::mat4);

#endif SHADER_H