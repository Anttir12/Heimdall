#pragma once

#include "ISSHEIMDALL.h"
#include "Firing.h"
#include "Physable.h"
#include "Renderable.h"
#include "Enemy_AI.h"
#include "AI_Character.h"
#include "Bullet.h"
#include "Render_List.h"
#include "World.h"
#include "Movement.h"
#include <Box2D\Box2D.h>
#include "Planet.h"

class Enemy : public Renderable, public Physable, public AI_Character
{
public:
	// std::unique_ptr<UnitControll> controll(new AiControll);
	Enemy(int posX, int posY, FiringMode* mode = new FiringModeBurst());
	virtual ~Enemy();
	virtual int init();
	virtual int render();
	virtual void finish();
	virtual int load(const char*);
	virtual void update(int x, int y);
	b2Vec2 getPosition();
	virtual void run_ai();
	void fire(float player_x, float player_y);
	void returnHome();
	void moveTowardsTarget(float target_x, float target_y);
	void lookTowardsTarget(float target_x, float target_y);
	void setHomePlanet(Planet* planet)
	{
		homePlanet = planet;
		hasHomePlanet = true;
	}
	Planet* getHomePlanet(){ return homePlanet; }
	void reduceHP(int ammount);
	int init_rendering();

	//the distance from homePlanet enemy is allowed to go
	int defendRadius = 3000;
	bool returningHome = false;
	bool orderedToAttack = false;
	bool hasHomePlanet = false;
private:
	int hp = 3;
	Planet* homePlanet;
	std::unique_ptr<FiringMode> firingMode;
	GLuint m_dl;
	std::unique_ptr<Enemy_AI_Node> m_decision_tree; ///< raw ptrs should be turned into smart ptrs
	std::unique_ptr<Move> move;
	std::unique_ptr<Audio> audio;
	static GLuint enemyTexture1;
};

