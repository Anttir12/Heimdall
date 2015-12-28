#pragma once

#include "Physable.h"
#include "renderable.h"
#include "Movement.h"
#include "AI_Character.h"
#include "Projectile.h"

class Missile : public Projectile, public AI_Character
{
public:

	Missile(float, float, float, float, b2Vec2);
	virtual ~Missile();
	virtual int init();
	// Renderable implementation.
	virtual int render();
	void finish(bool collide);
	// Common rendering initialization
	// for all Bullet instances.
	virtual void run_ai();
	static int	init_rendering();
	static void	finish_rendering();
	void moveTowardsTarget();

private:
	bool roratingLeft = false;
	bool finishing = false;
	// Display List for rendering Bullets.
	// Common for all Bullet instances.
	static GLuint m_dl;
	int timer = 0;
	static GLuint missileTexture;
	b2Vec2 target;
	std::chrono::time_point<std::chrono::system_clock> start, end;
	std::unique_ptr<Move> move;
};


