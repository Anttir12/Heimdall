#pragma once

#include "Decision_Tree.h"
#include "Enemy.h"
class Enemy;

class Enemy_AI_Node : public Decision_Tree_Node
{
public:
	Enemy_AI_Node(Enemy* e)	: m_enemy(e) {}
	virtual ~Enemy_AI_Node() {}

protected:
	Enemy* m_enemy;
};

class Decide_Shooting : public Enemy_AI_Node
{
public:
	Decide_Shooting(Enemy *e) : Enemy_AI_Node(e)	{}
	virtual ~Decide_Shooting()						{}
	virtual void evaluate();
};

//not used?
class Decide_Moving : public Enemy_AI_Node
{
public:
	Decide_Moving(Enemy *e) : Enemy_AI_Node(e) {}
	virtual ~Decide_Moving() {}
	virtual void evaluate() {};
};

class Is_Player_Close : public Enemy_AI_Node
{
public:
	Is_Player_Close(Enemy *e) : Enemy_AI_Node(e)	{}
	virtual ~Is_Player_Close()						{}
	virtual void evaluate();
};

//not used?
class Is_Player_In_Range : public Enemy_AI_Node
{
public:
Is_Player_In_Range(Enemy *e) : Enemy_AI_Node(e)			{}
virtual ~Is_Player_In_Range()							{}
virtual void evaluate();

};

class Far_From_Home : public Enemy_AI_Node
{
public:
	Far_From_Home(Enemy *e) : Enemy_AI_Node(e)			{}
	virtual ~Far_From_Home()							{}
	virtual void evaluate();
};

class Ordered_To_Capture : public Enemy_AI_Node
{
public:
	Ordered_To_Capture(Enemy *e) : Enemy_AI_Node(e)			{}
	virtual ~Ordered_To_Capture()							{}
	virtual void evaluate();
};
