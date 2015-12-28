#include "Missile.h"

#include "World.h"
#include "Delete_List.h"
#include "Render_List.h"
#include "ISSHEIMDALL.h"
#include "Renderable.h"
#include <Box2D\Box2D.h>
#include "Explosion.h"
#include "Player.h"

GLuint Missile::m_dl = 0;
GLuint Missile::missileTexture = 0;
Missile::Missile(float x, float y, float angle, float force, b2Vec2 target_)
///< : Use initializer list
{
	//Slughtly move the missile so it appears from the right point (not middle of the shooter)
	float y_ = (sin(angle*0.0174532925) * 85) / (float)PHYS_SCALE;
	float x_ = (cos(angle*0.0174532925) * 85) / (float)PHYS_SCALE;
	b2BodyDef bodyDef;
	bodyDef.type = b2_dynamicBody;
	bodyDef.position.Set(x + x_, y + y_);
	bodyDef.angle = angle;
	//Set as missile
	bodyDef.bullet = true;
	target = target_;
	m_body = World::get()->CreateBody(&bodyDef);
	b2PolygonShape shape;
	shape.SetAsBox(30 / (float)PHYS_SCALE, 10 / (float)PHYS_SCALE);
	b2FixtureDef fixtureDef;
	fixtureDef.shape = &shape;
	fixtureDef.density = 0.1;
	fixtureDef.friction = 0;
	m_body->CreateFixture(&fixtureDef);
	m_body->SetUserData(this);
	m_body->SetAngularDamping(10.0f);
	//fire the missile towards the direction player is looking
	m_body->ApplyForceToCenter(b2Vec2(
		force * cos(angle*0.0174532925),
		force * sin(angle*0.0174532925)), true);
	move.reset(new Move(m_body));
	m_body->SetTransform(m_body->GetPosition(), angle / RADTODEG);
	texID = LoadTexturePNG("graphics/projectiles/missile2.png",texWidth,texHeight);
	start = std::chrono::system_clock::now();
	damage = 5;
	initVBO();
	setvData(30,10);
}
void Missile::run_ai(){
	moveTowardsTarget();
}
void Missile::moveTowardsTarget()
{
	b2Vec2 pos = m_body->GetPosition();
	b2Vec2 velocity;
	float dx, dy;
	//player.x = 10;
	//player.y = 10;
	dx = target.x - pos.x;
	dy = target.y - pos.y;
	float angle = atan2f(dy, dx)*RADTODEG;
	if (angle < 0)
		angle = angle + 360;
	float currentAngle = m_body->GetAngle()*RADTODEG;
	float rounds = floor(currentAngle / 360);
	currentAngle = abs(currentAngle - (360 * rounds));

	float dir = currentAngle - angle;
	if (abs(dir) > 5)
	{
		if (dir < 0 && dir > -180 || dir > 180)
			move->rotateLeft(0.025);
		else if (dir > 0 && dir < 180 || dir < -180)
			move->rotateRight(0.025);
	}
	move.get()->up(1.5f);


}


Missile::~Missile()
{

}

int	Missile::init_rendering()
{
	if (Missile::m_dl)
		return 1;

	//
	// Prepare a display list for rendering.
	//
	Missile::m_dl = glGenLists(1);
	glNewList(Missile::m_dl, GL_COMPILE);

	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 390; i += 30)
	{
		float degInRad = i* 0.0174532925f;
		glVertex3f(
			cos(degInRad) * 10,
			sin(degInRad) * 10,
			0.0);
	}
	glVertex3f(0.0, 0.0, 0.0);
	glEnd();
	glEndList();
	return (glGetError() == GL_NO_ERROR);
}
int Missile::init()
{
	return 0;
}
void Missile::finish(bool collide)
{
	if (!finishing)
	{
		float x = m_body->GetPosition().x*PHYS_SCALE;
		float y = m_body->GetPosition().y*PHYS_SCALE;
		Explosion* explosion = new Explosion(x, y, 3);
		explosion->setSize(100, 100);
		Render_List::get()->push_back(explosion);
		AI_List::get().remove(this);
		finishing = true;
	}
}

int Missile::render()
{
	std::chrono::duration<double> elapsed_seconds = std::chrono::system_clock::now() - start;
	if (elapsed_seconds.count() > 5)
	{
		finish(false);
		Delete_List::get()->push_back_unique(this);
	}
	else
	{		
		glMatrixMode(GL_MODELVIEW);
		//glColor3f(1.0f, 0.1f, 0.0f);
		b2Vec2 pos = m_body->GetPosition();
		float angle = m_body->GetAngle() * RADTODEG;
		renderVBO(pos.x * (float)PHYS_SCALE, pos.y  * (float)PHYS_SCALE, angle);
	}
	return 1;

}
void Missile::finish_rendering()
{
	glDeleteLists(m_dl, 1);
	Missile::m_dl = 0;
}