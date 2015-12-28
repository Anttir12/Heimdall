#pragma once

#include "Projectile.h"

class Bullet : public Projectile
{
public:

	Bullet(float, float, float, float);
	virtual ~Bullet();
	virtual int init();
	// Renderable implementation.
	virtual int render(); 
	void finish(bool collide);
	// Common rendering initialization
	// for all Bullet instances.
	static int	init_rendering();
	static void	finish_rendering();
	
private:
	
	bool finishing = false;
	// Display List for rendering Bullets.
	// Common for all Bullet instances.
	static GLuint m_dl;
    int timer = 0;
	std::chrono::time_point<std::chrono::system_clock> start, end;
	static GLuint bulletTexture;
};


