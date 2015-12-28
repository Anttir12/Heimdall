#pragma once
#include "Renderable.h"
#include "Physable.h"

class Projectile : public Renderable, public Physable
{
public:
	virtual int render() = 0;
	virtual void finish(bool collide) = 0;
	virtual int init() = 0;
	void setEnemy(bool set){ enemy = set; }
	bool getEnemy(){ return enemy; }
	int getDamage(){ return damage; }

protected:
	int damage = 1;
	bool enemy = false;
};