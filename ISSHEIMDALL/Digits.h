#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include "FBOItem.h"
#include <GL/glew.h>

class Digits : public FBOItem
{
public:
	void initTextures();
	void renderToTexture(int num, int x_, int y_);
	void renderToTextureNoClear(int num, int x_, int y_);
	void clear();
	void render();

private:
	
	void renderDigit(int digit);
	int countDigits(int num);
	std::vector<int> getDigits(int num);
	static std::vector<GLuint> numberTextures;
	int width = 20;
	int height = 25;
	int x, y;
};