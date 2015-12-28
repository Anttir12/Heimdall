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
#include "StateIndicator.h"
#include "FBOItem.h"
#include "Minimap.h"
#include "Digits.h"
#include "Text.h"

class Hud : public FBOItem
{
public:
	
	Hud();

	void renderToTexture();
	void render();
private:
	Digits digits;
	Minimap minimap;
	StateIndicator state;
	Text resourceText;
};