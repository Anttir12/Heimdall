#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include "FBOItem.h"
#include <GL/glew.h>

extern int WIDTH, HEIGHT;

//TODO UNFINISHED

class Text
{
public:
	void loadText(const char* file);
	void renderToTexture(int x, int y);
	float getWidth(){ return width; }
	float getHeight(){ return height; }

private:
	float width, height;
	GLuint LoadTexturePNG(const char* file);
	GLuint renderableTexture;
};