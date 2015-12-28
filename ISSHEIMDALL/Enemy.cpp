#include "Enemy.h"
#include "Delete_List.h"
#include "AI_List.h"
#include "Explosion.h"
#include "Renderable.h"

using namespace std;
extern int WIDTH, HEIGHT;

GLuint Enemy::enemyTexture1 = 0;

Enemy::Enemy(int posX, int posY, FiringMode* mode)
	: m_decision_tree(new Ordered_To_Capture(this))
	, firingMode(mode)
{
	m_body = NULL;
	b2Vec2 pos;
	pos.x = posX;
	pos.y = posY;
	b2BodyDef myBodyDef;
	myBodyDef.type = b2_dynamicBody;
	myBodyDef.position.Set(pos.x / (float)PHYS_SCALE, pos.y / (float)PHYS_SCALE);
	m_body = World::get()->CreateBody(&myBodyDef);
	move.reset(new Move(m_body));

	b2CircleShape enemyShape;
	enemyShape.m_radius = 40 / (float)PHYS_SCALE;
	b2FixtureDef myFixtureDef;
	myFixtureDef.shape = &enemyShape;
	myFixtureDef.density = 0.1f;
	myFixtureDef.friction = 1;
	m_body->CreateFixture(&myFixtureDef);
	m_body->SetLinearDamping(0.5f);
	m_body->SetAngularDamping(3.0f);
	m_body->SetUserData(this);
	Far_From_Home* ffh = new Far_From_Home(this);
	Is_Player_Close* ipc = new Is_Player_Close(this);
	Decide_Shooting* ds = new Decide_Shooting(this);
	m_decision_tree->_child[0] = ffh;
	ffh->_child[0] = ipc;
	ipc->_child[1] = ds;
	type = Type::ENEMY;
	firingMode->setEnemy(true);
	if (enemyTexture1 == NULL)
		enemyTexture1 = LoadTexturePNG("graphics/ships/enemy1.png", texWidth, texHeight);

	texID = enemyTexture1; //TODO: Some clever mechanism that decides which texture enemy uses
	initVBO();
	setvData(90, 90);
}


Enemy::~Enemy()
{ 
}

int Enemy::init()
{
	//
	// Prepare a display list for rendering.
	// TODO: NOW JUST A PLACEHOLDER (CIRCLE).
	//
	m_dl = glGenLists(1);
	glNewList(m_dl, GL_COMPILE);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 390; i+= 30)
	{
		float degInRad = i* 0.0174532925f;
		glVertex3f(
			cos(degInRad) * 30,
			sin(degInRad) * 30,
			0.0);
	}
	glVertex3f(0.0, 0.0, 0.0);
	glEnd();
	glEndList();
	return (glGetError() == GL_NO_ERROR);
}



b2Vec2 Enemy::getPosition(){
	return m_body->GetPosition();
}
void Enemy::update(int x, int y){

}
void Enemy::run_ai()
{
	m_decision_tree->evaluate();
}
void Enemy::finish(){
	if (hasHomePlanet)
		homePlanet->shipDestroyed(this);
	float x = m_body->GetPosition().x*PHYS_SCALE;
	float y = m_body->GetPosition().y*PHYS_SCALE;
	Explosion* explosion = new Explosion(x, y, 3, 200, 200);
	Render_List::get()->push_back(explosion);
}

void Enemy::reduceHP(int ammount)
{
	hp -= ammount;
	if (hp < 1)
	{
		Render_List::get()->remove(this);
		AI_List::get().remove(this);
		Delete_List::get()->push_back_unique(this);
		finish();
	}
}

int Enemy::render(){
	b2Vec2 pos = m_body->GetPosition();
	float angle = m_body->GetAngle() * 57.2957795f;
	renderVBO(pos.x * (float)PHYS_SCALE, pos.y  * (float)PHYS_SCALE, angle);
	return 1;
}
void Enemy::moveTowardsTarget(float target_x, float target_y)
{
	b2Vec2 pos = m_body->GetPosition();
	b2Vec2 velocity;
	float dx, dy;
	dx = target_x - pos.x;
	dy = target_y - pos.y;
	//float angle = atan2f(dy, dx);
	velocity.x = (dx / (abs(dx) + abs(dy))) * 5;
	velocity.y = (dy / (abs(dx) + abs(dy))) * 5;
	m_body->SetLinearVelocity(velocity);
}

void Enemy::returnHome()
{
	std::cout << "returning home!" << std::endl;
	b2Vec2 target = homePlanet->getPos();
	lookTowardsTarget(target.x, target.y);
	moveTowardsTarget(target.x, target.y);
}

void Enemy::lookTowardsTarget(float target_x, float target_y)
{
	b2Vec2 pos = m_body->GetPosition();
	b2Vec2 velocity;
	float dx, dy;
	dx = target_x - pos.x;
	dy = target_y - pos.y;
	float angle = atan2f(dy, dx)*57.2957795f;
	if (angle < 0)
		angle = angle + 360;
	float currentAngle = m_body->GetAngle()*57.2957795f;
	float rounds = floor(currentAngle / 360);
	currentAngle = abs(currentAngle - (360 * rounds));

	float dir = currentAngle - angle;
	if (abs(dir) > 8)
	{
		if (dir < 0 && dir > -180 || dir > 180)
			move->rotateLeft();
		else if (dir > 0 && dir < 180 || dir < -180)
			move->rotateRight();
	}

}
void Enemy::fire(float target_x, float target_y)
{
	b2Vec2 pos = m_body->GetPosition();
	float dx, dy;
	dx = target_x - pos.x;
	dy = target_y - pos.y;
	float angle = atan2f(dy, dx);
	firingMode->fire(pos, angle);
}
int Enemy::load(const char* file){

	return 0;

}



