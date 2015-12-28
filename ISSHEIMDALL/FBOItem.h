#pragma once
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <SDL.h>
#include "Render_List.h"
#include "Player.h"
extern int WIDTH, HEIGHT;

class FBOItem{
public:
	void init();
	//TODO: Refactor this so it can be widely used everywhere!!!
	GLuint LoadTexturePNG(const char* file);

protected:
	int width = WIDTH;
	int height = HEIGHT;
	GLuint m_dl;
	GLuint renderedTexture;
	GLuint framebufferName;
};