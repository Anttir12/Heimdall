#pragma once

#include "Rect.h"
#include "Text.h"

class ClickableObject : public Rect
{
public:
	ClickableObject(){};
	ClickableObject(const char* file, float x_, float y_)
	{
		text.loadText(file);
		width = text.getWidth();
		height = text.getHeight();
		x = x_;
		y = y_;
	}
	void renderObject(float r = 1, float g = 1, float b = 1)
	{
		glColor3f(r, g, b);
		text.renderToTexture(x,y);
		glColor3f(1, 1, 1);
	}
	void init(const char* file, float x_, float y_)
	{
		text.loadText(file);
		width = text.getWidth();
		height = text.getHeight();
		x = x_;
		y = y_;
	}
	void drawBox()
	{
		glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
		glBegin(GL_QUADS);
		glVertex2f(x, y);
		glVertex2f(x+width,y);
		glVertex2f(x+width,y+height);
		glVertex2f(x, y+height);
		glEnd();
		glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
	}
private:
	Text text;
};