#include "Rect.h"

bool Rect::collidesWith(float x_, float y_)
{
	if (x_ >= x && x_ <= x + width && y_ >= y && y_ <= y + height)
	{
		return true;
	}
	return false;
}


void Rect::setPoint(float x_, float y_)
{
	x = x_;
	y = y_;
}