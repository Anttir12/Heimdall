#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include "FBOItem.h"
#include <GL/glew.h>
#include "ClickableObject.h"
#include "Player.h"
#include "Digits.h"
#include "Text.h"

class UpgradeMenu : public FBOItem
{
public:
	void initTextures();
	void renderToTexture();
	void drawDebugClick(float x, float y);
	void render();
	void click(float x, float y);

	int HandleEvents();


private:
	Digits digits;
	ClickableObject autoMode;
	ClickableObject single;
	ClickableObject burst;
	ClickableObject upgrade;
	ClickableObject increaseHP;
	ClickableObject repair;
	ClickableObject missiles;
	Text chooseFiringMode;
};