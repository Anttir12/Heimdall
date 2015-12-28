#pragma once

#include <Box2D\Box2D.h>


class Move
{
public:

	Move(b2Body* body) : m_body(body) {}

	void up(float force = 0.6);
	void down(float force = 0.6);
	void rotateLeft(float force = 0.2);
	void rotateRight(float force = 0.2);
private:
	b2Body* m_body;
	void speedCap();
};