#pragma once

#include <windows.h>
#include <stdio.h>
#include <SDL.h>
#include <stdio.h>
#include <SDL_image.h>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "Render_List.h"
#include "ISSHEIMDALL.h"
#include "Player.h"
#include "FBOItem.h"
#include "Digits.h"

extern int WIDTH, HEIGHT;
class StateIndicator : public FBOItem
{
public:
	void renderToTexture();
	void renderBackdrop();
	void renderHpIndicator();
	void initTextures();
	void render();

	void sets(int test)
	{
		height = test;
		width = test;
	}

private:
	GLuint backdropTexture;
	GLuint healthTexture;
	Digits digits;
};
