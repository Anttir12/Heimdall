#pragma once

#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <SDL.h>
#include <SDL_opengl.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <chrono>
#include <Box2D\Box2D.h>

#include "Resources.h"
#include "Movement.h"
#include "Renderable.h"
#include "Firing.h"
#include "Equipment.h"
#include "Audio.h"
#include "AI_List.h"
#include "Missile.h"
#include "Bullet.h"
#include "Render_List.h"
#include "ISSHEIMDALL.h"
#include "World.h"


///< use base class for common methdos etc 
///< for Player and enemy class


///< class has a large public interface. 
///< STUDY SINGLE RESPONSIBILITY PRINCIPLE
class Player: public Renderable
{
public:
	
	virtual ~Player();
	virtual int init();
	virtual int render();
	virtual void finish();
	virtual void update(float timestep);
	virtual void setCameraToPlayer(float scale = 1);
	b2Vec2 getPosition(); //const ; <-- add const correctess
	void debugRender();
	void left();
	void right();
	void up();
	void down();
	void fire();
	void fireMissile(b2Vec2);
	void addResources(int ammount = 1);	
	b2Body* get_body(); //const ; <-- add const correctess
	static Player& get();
	void reduceHP(int ammount);
	int getResources(){return resources.getBasicResource();}
	FiringMode* getFiringMode(){ return firingMode.get(); }
	Equipment* getEquipment(){ return &equipment; }
	int getHP(){ return health; }
	void addHP(int amount = 1){ health += 1; }
	float getScaling(){ return scaling; }
	void setResources(int ammount){resources.setBasicResourcee(ammount);}
	void setFiringMode(FiringMode* mode);
	
	
private:
	Player();
	Player(const Player&);
	Player operator= (const Player&);
	b2Body* m_body; ///< raw ptrs should be turned into smart ptrs
	Resources resources;
	Equipment equipment;
	GLuint m_dl;//for debug render
	
	std::chrono::time_point<std::chrono::system_clock> missileCD;
	std::unique_ptr<FiringMode> firingMode;
	std::unique_ptr<Move> move;
	
	Audio audio;
	int count = 1;
	float scaling = 1;
	int health = 10;
};

