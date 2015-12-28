#pragma once

#include <Box2D/Box2D.h>
#include "ISSHEIMDALL.h"


/*
Physics world (singleton) derived from b2World.
*/
class World : public b2World
{
public:

	// Instance access.
	///< Consider Meyers singleton as it's more elegant looking
	///< (IMHO)
	static World* get()
	{
		if (!World::m_instance)
			World::m_instance = new World();
		return World::m_instance;
	}

private:

	World() : b2World(b2Vec2(0.0f, 0))	{}
	~World()										{}

	// Singleton instance of the class.
	static World* m_instance;
};

