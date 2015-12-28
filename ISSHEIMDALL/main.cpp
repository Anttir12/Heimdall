#include <windows.h>
#include <stdio.h>
#include <chrono>
#include <string>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <SDL.h>
#include <Box2D/Box2D.h>
#include <tchar.h>
#include <SDL_image.h>
#include <SDL_video.h>
#include "ISSHEIMDALL.h"
#include "AI_List.h"
#include "Delete_List.h"
#include "World.h"
#include "Render_List.h"
#include "Player.h"
#include "Level.h"
#include "Planet.h"
#include "Enemy.h"
#include "ContactListener.h"
#include "Audio.h"
#include "Firing.h"
#include "StartScreen.h"
#include "Hud.h"
#include "DeathRay.h"
#include "Explosion.h"
#include "UpgradeMenu.h"
#include "MainLoop.h"
int init();

///< use main instead of  _tmain() for cross platform support
///< main function insanely long. split into classes or functions
int _tmain(int argc, char* argv[])
{

	B2_NOT_USED(argc);
	B2_NOT_USED(argv);
	if (init() != 1)
	{
		return 0;
	}
	MainLoop mainloop;
	mainloop.run();
	
}

int init()
{

	//
	// For SDL initialization and window creation, see
	// https://wiki.libsdl.org/SDL_CreateWindow
	// 
	SDL_Init(SDL_INIT_VIDEO);// Initialize SDL2
	
	SDL_DisplayMode currentMode;
	SDL_GetCurrentDisplayMode(0, &currentMode);
	WIDTH = currentMode.w; 
	HEIGHT = currentMode.h;
	
	window = SDL_CreateWindow(
		"ISS Heimdall",					// window title
		SDL_WINDOWPOS_UNDEFINED,		// initial x position
		SDL_WINDOWPOS_UNDEFINED,		// initial y position
		WIDTH,							// width, in pixels
		HEIGHT,							// height, in pixels
		SDL_WINDOW_OPENGL |				// flags - see below
		SDL_WINDOW_SHOWN |
		SDL_WINDOW_FULLSCREEN_DESKTOP
		);
	if (window == NULL) {
		// In the event that the window could not be made...
		fprintf(stderr, "Could not create window: %s\n", SDL_GetError());
		return 0;
	}

	//
	// For OpenGL context creation, see
	// https://wiki.libsdl.org/SDL_GL_CreateContext
	//
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
	glcontext = SDL_GL_CreateContext(window);


	//GLEW initialization
	GLenum err = glewInit();

	if (GLEW_OK != err)
	{
		// Problem: glewInit failed, something is seriously wrong.
		fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
		return 0;
	}
	else
		fprintf(stdout, "Status: Using GLEW %s\n", glewGetString(GLEW_VERSION));

	//
	// OpenGL camera, projection, etc.
	// 
	glEnable(GL_TEXTURE_2D);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0f, WIDTH, 0.0f, HEIGHT, 0.0f, 1.0f);
	glViewport(0, 0, WIDTH, HEIGHT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glScalef(1,1,1);
	//glClearColor(0, 0, 0, 0);
	glColor3f(1.0, 1.0, 1.0);
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

	//initialize IMG_Init
	int imgFlags = IMG_INIT_PNG;
	if (!(IMG_Init(imgFlags) & imgFlags))
	{
		printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
		return 0;
	}
	return 1;
}
