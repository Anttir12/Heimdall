#pragma once
#include <windows.h>
#include <gl/glew.h>
#include <gl/GL.h>
#include <Chrono>
#include "renderable.h"
#include "Bullet.h"
#include "SDL.h"
#include "SDL_image.h"
#include "Timer.h"
#include <iostream>
#include "Render_List.h"
#include "Audio.h"


class Explosion : public Renderable{
	private:

		std::chrono::time_point<std::chrono::system_clock> start;
		int framesPerRow, currentFrame=1;
		int posX, posY;
		int framesPerRowA = 40, framesPerRowC =48;
		int framesPerColumn = 1;
		float frameWidth = 50, frameHeight = 50;
		static GLuint ExplosionA, ExplosionC;
		GLuint renderableExplosion = -1;
		Audio audio;
	public:

		Explosion(float x, float y, int type)
		{
			start = Timer::get().getTime();
			posX = x;
			posY = y;
			chooseExplosion(type);
			init();
		}
		Explosion(float x, float y, int type, float width, float height)
		{
			start = Timer::get().getTime();
			posX = x;
			posY = y;
			chooseExplosion(type);
			setSize(width, height);
			init();
		}
		Explosion(float x, float y)
		{
			start = Timer::get().getTime();
			posX = x;
			posY = y; 
			init();
		}
		static int Explosion::initExplosions();
		

		static GLuint Explosion::loadSpriteSheet(const char* file)
		{
			GLuint TextureID;

			
			SDL_Surface* Surface = IMG_Load(file);//loads image as surface
			if (Surface == NULL){
				//cout << "ERROR: Loaded explosion's surface is null! " << endl;
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

		int Explosion::render()
		{
			if (renderableExplosion > 0)
			{
				float texture = 1 / (float)framesPerRow;
				float textX2 = (float)currentFrame*texture;
				float textX1 = textX2 - texture;
				setTexCoords(currentFrame, framesPerRow, framesPerColumn);
				renderVBO(posX, posY, frameWidth, frameHeight, 0);
				/*
				glBindTexture(GL_TEXTURE_2D, renderableExplosion);
				glEnable(GL_BLEND);
				glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
				//generate a quad
				glBegin(GL_QUADS);
				glTexCoord2f(textX1, 0); glVertex3f(posX - frameWidth / 2, posY - frameHeight / 2, 0);
				glTexCoord2f(textX2, 0); glVertex3f(posX + frameWidth / 2, posY - frameHeight / 2, 0);
				glTexCoord2f(textX2, 1); glVertex3f(posX + frameWidth / 2, posY + frameHeight / 2, 0);
				glTexCoord2f(textX1, 1); glVertex3f(posX - frameWidth / 2, posY + frameHeight / 2, 0);

				glEnd();
				glBindTexture(GL_TEXTURE_2D, NULL);*/
				if (Timer::get().getElapsedTime(start) > (21.f / 1000))
				{
					++currentFrame;
					start = Timer::get().getTime();
				}
				

				if (currentFrame > framesPerRow)
				{
					return -1;
				}
				return 1;
			}
			else
			{
				std::cout << "WARNING! renderableExplosion is not set! (" <<renderableExplosion<<")"<< std::endl;
				return -1;
			}
		}
		int Explosion::init()
		{
			initVBO();
			setvData(frameWidth, frameHeight);
			return 1;
		}

		void Explosion::chooseExplosion(int num)
		{
			if (num == 1)
			{
				framesPerRow = framesPerRowA;
				texID = ExplosionA;
			}
			else if (num == 3)
			{
				framesPerRow = framesPerRowC;
				texID = ExplosionC;
			}
			audio.playExplosionSound();
		}
		void Explosion::setSize(float width, float height)
		{
			frameWidth = width;
			frameHeight = height;
		}
};