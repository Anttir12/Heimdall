#include <SDL_image.h>
#include "Renderable.h"
#include <iostream>
#include <math.h>
#include "Render_List.h"
#include <gl/GL.h>
#include <gl/GLU.h>
#include "Timer.h"


class Cursor : public Renderable
{
	public:
		Cursor();
		void setPosition(int mouseX_, int mouseY_);
		virtual int init();
		virtual int render();

	private:
		int mouseX; 
		int mouseY;
		int angle=0;
		chrono::time_point<std::chrono::system_clock> startTime;
};

Cursor::Cursor()
{
	startTime = Timer::get().getTime();
	texID = LoadTexturePNG("Hud/cursor.png", texWidth, texHeight);
	initVBO();
	setvData(texWidth, texHeight);
}

int Cursor::render(){
	if (Timer::get().getElapsedTime(startTime) > 0.05)
	{
		angle -= 2;
		startTime = Timer::get().getTime();
		if (angle <= -360)
			angle = 0;
	}
	renderVBO(mouseX,mouseY,angle);
	return 1;
}

int Cursor::init(){
	return 0;
}

void Cursor::setPosition(int mouseX_, int mouseY_)
{
	mouseX = mouseX_;
	mouseY = mouseY_;
}

