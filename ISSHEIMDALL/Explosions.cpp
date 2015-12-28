#include "Explosion.h"

GLuint Explosion::ExplosionA;
GLuint Explosion::ExplosionC;

int Explosion::initExplosions()
{
	Explosion::ExplosionA = loadSpriteSheet("graphics/explosions/ExplosionA.png");
	Explosion::ExplosionC = loadSpriteSheet("graphics/explosions/ExplosionC.png");

	return 1;
}