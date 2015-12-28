#include "Player.h"
#include "Bullet.h"
#include "Render_List.h"
#include "ISSHEIMDALL.h"
#include "World.h"
#include "Audio.h"
#include "Shield.h"
using namespace std;
extern int WIDTH, HEIGHT;


Player::Player()
 ///< : member variables to initializer list

{
	m_body = NULL;
	b2Vec2 pos;
	pos.x = WIDTH/2 -50;
	pos.y = HEIGHT/2 -50;
	b2BodyDef myBodyDef;
	myBodyDef.type = b2_dynamicBody;
	myBodyDef.position.Set(pos.x / (float)PHYS_SCALE, pos.y / (float)PHYS_SCALE);
	m_body = World::get()->CreateBody(&myBodyDef);
	m_body->SetUserData(this);
	b2CircleShape playerShape;
	playerShape.m_radius = 44 / (float)PHYS_SCALE;
	b2FixtureDef myFixtureDef;
	myFixtureDef.shape = &playerShape;
	myFixtureDef.density = 0.1f;
	myFixtureDef.friction = 1;

	m_body->CreateFixture(&myFixtureDef);
	m_body->SetAngularDamping(5.0f);
	type = Type::PLAYER;
	move.reset(new Move(m_body));
	missileCD = Timer::get().getTime();
	texID = LoadTexturePNG("graphics/ships/carrier.png", texWidth, texHeight);
	initVBO();
	setvData(100, 100);
	
}


Player::~Player()
{
}

Player& Player::get()
{
	static Player p;
	return p;
}
//TODO: make own class for firing missiles!
void Player::fireMissile(b2Vec2 target)
{
	float elapsedTime = Timer::get().getElapsedTime(missileCD);
	if (elapsedTime > 0.5)
	{
		count = 1;
	}
	if (elapsedTime > 0.1*count)
	{
		Missile* missile = new Missile(m_body->GetPosition().x, m_body->GetPosition().y, m_body->GetAngle()*57.2957795f, 7.5f, target);
		Render_List::get()->push_back(missile);
		AI_List::get().push_back(missile);
		++count;
		if (count > 3)
			count = 10;
		missileCD = Timer::get().getTime();
	}
	else if (elapsedTime > 0.45)//Bursts comes in 0.45s intervals! TODO: Remove hardcoded value -> add possibility for customation
	{
		count = 1;
		missileCD = Timer::get().getTime();
	}

}
void Player::setFiringMode(FiringMode* mode) {
	firingMode.release();
	firingMode.reset(mode);
	if (!equipment.ownsType(mode->getType()))
		equipment.set(mode);
}

void Player::addResources(int ammount)
{
	resources.addBasicResources(ammount);
}

void Player::reduceHP(int ammount){
	if (health > 0)
	{
		health -= ammount;
	}
}
int Player::init()
{
	//
	// Prepare a display list for rendering.
	// TODO: NOW JUST A PLACEHOLDER (CIRCLE).
	//
	m_dl = glGenLists(1);
	glNewList(m_dl, GL_COMPILE);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 360; ++i)
	{
		float degInRad = i* 0.0174532925;
		glVertex3f(
			cos(degInRad) * 44,
			sin(degInRad) * 44,
			0.0);
	}
	glVertex3f(0.0, 0.0, 0.0);
	glEnd();
	glEndList();
	return (glGetError() == GL_NO_ERROR);
}



b2Vec2 Player::getPosition(){
	return m_body->GetPosition();
}
void Player::update(float timestep){
	
	
}
void Player::up()
{	
	move->up();
	audio.playOwnEngineSound();
}

void Player::down()
{
	move->down();
	audio.playOwnEngineSound();
}
void Player::left()
{
	
	move->rotateLeft();
	
}

void Player::right()
{
	move->rotateRight();
}

void Player::finish(){

}

b2Body* Player::get_body()
{
	return m_body;
}

int Player::render(){
	float angle = m_body->GetAngle() * RADTODEG;
	b2Vec2 pos = m_body->GetPosition();
	renderVBO(pos.x * PHYS_SCALE, pos.y * PHYS_SCALE, angle);
	return 1;
}
void Player::debugRender()
{
	glMatrixMode(GL_MODELVIEW);
	b2Vec2 pos = m_body->GetPosition();
	float angle = m_body->GetAngle() * RADTODEG;
	glTranslatef(pos.x * (float)PHYS_SCALE, pos.y  * (float)PHYS_SCALE, 0.0);
	glRotatef(angle, 0.0, 0.0, 1.0);
	glCallList(m_dl);
}
void Player::setCameraToPlayer(float scale)
{
	scaling = scale;
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	b2Vec2 pos = m_body->GetPosition();
	
	gluLookAt(
		pos.x * (float)PHYS_SCALE * scaling - WIDTH / 2,
		pos.y * (float)PHYS_SCALE * scaling - HEIGHT / 2,
		1,
		pos.x * (float)PHYS_SCALE * scaling - WIDTH / 2,
		pos.y * (float)PHYS_SCALE * scaling - HEIGHT / 2,
		0, 0, 1, 0);
		
	glScalef(scaling, scaling, 1);
}
void Player::fire()
{
	if (firingMode != NULL)
	{
		b2Vec2 pos = m_body->GetPosition();
		firingMode->fire(pos, m_body->GetAngle());
	}
}

