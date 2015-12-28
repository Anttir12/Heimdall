#pragma once
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>

struct pos2D
{
	GLfloat x;
	GLfloat y;
};
struct textureCoord
{
	GLfloat s;
	GLfloat t;
};

struct vertexData2D
{
	pos2D position;
	textureCoord texCoord;
};