#pragma once

class Rect{
public:
	float x, y, width, height;
	Rect(){};
	Rect::Rect(float x_, float y_, float width_, float height_)
		: x(x_), y(y_), width(width_), height(height_){}
	void setPoint(float x_, float y_);
	bool collidesWith(float x_, float y_);
};