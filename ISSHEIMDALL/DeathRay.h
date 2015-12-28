#pragma once

#include <windows.h>
#include <gl/glew.h>
#include <gl/GL.h>
#include <Box2D/Box2D.h>
#include <Chrono>
#include "Physable.h"
#include "renderable.h"
#include "Player.h"
#include <SDL.h>
#include <SDL_opengl.h>
#include "Audio.h"
#include "math.h"
#include <iostream>

#define PI 3.14159265
extern SDL_Window* window;

class DeathRay
{
public:
	void drawRay();
	void init();
private:
	b2BodyDef* playerBodyDef;
	float rayAngle = 0;
	b2Vec2 ray;
	b2Body* body;
};

void DeathRay::drawRay(){
	int w;
	int h;
	SDL_GetWindowSize(window, &w, &h);
	int mouseX, mouseY;
	float mouseXf, mouseYf;
	b2RayCastInput input;
	b2Vec2 p1, p2;
	float rayLength, dX, dY;
	//Next calculate the angle for the ray
		rayAngle = 0;
		p1 = Player::get().getPosition();
		float angle = Player::get().get_body()->GetAngle()  * 57.2957795;
		SDL_GetMouseState(&mouseX, &mouseY);
		(float)mouseYf = h - mouseY;
		p2.x = p1.x +(mouseX - w / 2)/PHYS_SCALE;
		p2.y = p1.y+ (mouseYf - h / 2) / PHYS_SCALE;
		dX = (p2.x - p1.x);
		dY = (p2.y - p1.y);
		std::cout << "dX: " << dX << " ; dY: " << dY << "; angle: "<<angle<< std::endl;
		//rayLength is the same as hypotenuse
		rayLength = hypot(dX,dY);
		rayAngle = atan2((dX), (dY))*57.2957795;
							
		//b2Vec2 beam = p1 + rayLength*b2Vec2(sinf(rayAngle), cosf(rayAngle));
		//draw the laser (not physical as box2D is not yet implemented)

		//next let's generate the actual box2d stuff
		input.p1 = p1;
		input.p2 = p2;
		input.maxFraction = 1;
		glPushMatrix();
		glColor3f(1, 1, 1);
		glRotatef(-angle, 0.0, 0.0, 1.0);
		glBegin(GL_LINES);
		
		glVertex3f(0, 0,0);
		glVertex3f(dX*PHYS_SCALE, dY*PHYS_SCALE , 0);
		glEnd();
		glPopMatrix();
}
	
