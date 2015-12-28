#pragma once

#include <Box2D/Box2D.h>


/*
Base class for dynamic objects that are
under physics simulation.
*/
class Physable
{
public:

	Physable()			{}
	virtual ~Physable() {}

	b2Body* get_body()	{ return m_body; }

protected:

	// Body knows position and rotation.
	b2Body* m_body;
};

