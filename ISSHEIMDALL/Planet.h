#pragma once

#include "Renderable.h"
#include <Box2D\Box2D.h>
#include <vector>
#include "Timer.h"
#include "AI_List.h"
#include "ISSHEIMDALL.h"
#include "Player.h"

namespace Status
{
	const int HOSTILE = 0, NEUTRAL = 1, PLAYER_OWNED = 2;
}
class Enemy;
class Planet : public Renderable
{
public:	
	Planet(b2World* world, float x, float y, float radius, int status_);
	virtual ~Planet();
	virtual int init();
	virtual int init(float r,float num_segments);
	virtual int render();
	virtual void finish();
	b2Vec2 getPos();
	static GLuint LoadTexturePNG(const char* file);
	static void initTextures();
	void update();
	void shipDestroyed(Enemy* enemy);
	void checkCapturing();
	void SpawnEnemies();
	float radius_;
private:
	float capturingProgress = 0;
	void DrawCapturingCircle();
	static std::vector<GLuint> planetTextures;
	std::list<Enemy*> enemies;
	b2Body* m_body;
	int testi;
	int shipCap;
	GLuint m_dl;
	GLuint textureID;
	SDL_Surface* bgimage;
	int status;
	int spawnCount = 0;
	std::chrono::time_point<std::chrono::system_clock> start, end, resourceStart;
	float posX; float posY; float rr; //for enemies
};
