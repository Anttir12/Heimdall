#pragma once

#include "Level.h"
#include "Planet.h"
#include <SDL.h>
#include <SDL_opengl.h>
#include <stdio.h>
#include <SDL_image.h>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "Render_List.h"
#include "ISSHEIMDALL.h"
#include "World.h"
#include "ClickableObject.h"
#include <sstream>
#include "Text.h"

using namespace std;
extern int WIDTH, HEIGHT;
class StartScreen{
	
private:

	GLuint BackgroundTexture;
	ClickableObject StartTexture, QuitTexture;
	Text introText;
public:

	GLuint StartScreen::loadTexture(const char* file)
	{
		GLuint TextureID;
		SDL_Surface* Surface = IMG_Load(file);//loads image as surface
		if (Surface == NULL){
			cout << "ERROR: Loaded BG surface null! " << endl;
		}
		glGenTextures(1, &TextureID);//generates texture (later we use TextureID to to tell what texture to use when rendering)
		glBindTexture(GL_TEXTURE_2D, TextureID);//which texture do we use/modify etc now
		int Mode = GL_RGB;//RGB (red green blue)
		if (Surface->format->BytesPerPixel == 4){
			Mode = GL_RGBA;//(red green blue alpha)
		}
		//Make 2D texture. See https://www.opengl.org/sdk/docs/man3/xhtml/glTexImage2D.xml
		glTexImage2D(GL_TEXTURE_2D, 0, Mode, Surface->w, Surface->h, 0, Mode, GL_UNSIGNED_BYTE, Surface->pixels);
		//How texture behaves when the target area is smaller or bigger than texture (we strech or shrink texture linearly)
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

		return TextureID;

	}
	
	void StartScreen::initTexture(){
		BackgroundTexture = loadTexture("graphics/backgrounds/start_screen.png");
		StartTexture.init("texts/start.png", (WIDTH / 2 - 100), (HEIGHT / 2 + 75));
		QuitTexture.init("texts/quit.png", (WIDTH / 2 - 100), (HEIGHT / 2 + 0));
		introText.loadText("texts/introText.png");
	}
	void StartScreen::renderButtons()
	{
		StartTexture.renderObject();
		QuitTexture.renderObject();
		introText.renderToTexture((WIDTH / 2 - 200), (HEIGHT / 2 + 250));
	}
	void StartScreen::renderBackground()
	{
		glBindTexture(GL_TEXTURE_2D, BackgroundTexture);

		//generate a quad
		glBegin(GL_QUADS);
		glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
		glTexCoord2f(1, 0); glVertex3f(WIDTH, 0, 0);
		glTexCoord2f(1, 1); glVertex3f(WIDTH, HEIGHT, 0);
		glTexCoord2f(0, 1); glVertex3f(0, HEIGHT, 0);
		glEnd();
		glBindTexture(GL_TEXTURE_2D, NULL);
	}


	int StartScreen::chosenOption()
	{
		int option = NULL;
		int mouseX, mouseY;

		bool running = true;
		SDL_Event event;
		while (running)
		{
			while (SDL_PollEvent(&event))
			{
				if (event.type == SDL_MOUSEBUTTONDOWN)
				{
					if (event.button.button == SDL_BUTTON_LEFT)
					{
						SDL_GetMouseState(&mouseX, &mouseY);			
						mouseY = HEIGHT - mouseY;
						if (QuitTexture.collidesWith(mouseX,mouseY))
						{
							option = 0;
							running = false;
						}

						if (StartTexture.collidesWith(mouseX,mouseY))
						{
							option = 1;
							running = false;
						}

					}


				}

			}
		}
		return option;
	}
};

