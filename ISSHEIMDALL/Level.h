#pragma once

#include <SDL.h>
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <Box2D\Box2D.h>



#include "Renderable.h"


using namespace std;

class Level
{
public:

	Level();
	virtual ~Level();

	virtual int init();
	virtual void renderPlanets();
	virtual void renderBackground(b2Vec2 pos);
	virtual void finish();
	int loadBG(const char*);
	int load(const char*);
	void update();

private:
	SDL_Surface* bgimage;
	string level;
	b2World* world;
};

