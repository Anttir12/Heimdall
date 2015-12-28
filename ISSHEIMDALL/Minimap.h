#pragma once

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <SDL.h>
#include "Render_List.h"
#include "ISSHEIMDALL.h"
#include "Player.h"
#include "FBOItem.h"
extern int WIDTH, HEIGHT;
class Minimap : public FBOItem
{
public:
	void renderToTexture();

	void initTexture();
	void renderBackdrop();
	void renderUnitsToMinimap();

	void render();

	void sets(int test)
	{
		height = test;
		width = test;
	}

private:
	GLuint textureID;

};
