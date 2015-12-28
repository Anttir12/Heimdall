#include "Bullet.h"

#include "World.h"
#include "Delete_List.h"
#include "Render_List.h"
#include "ISSHEIMDALL.h"
#include "Renderable.h"
#include "Explosion.h"

GLuint Bullet::m_dl = 0;
GLuint Bullet::bulletTexture = 0;
Bullet::Bullet(float x, float y, float angle, float force)
	///< : Use initializer list
{
	//Slughtly move the bullet so it appears from the right point (not middle of the shooter)
	float y_ = (sin(angle*0.0174532925) * 55) / (float)PHYS_SCALE;
	float x_ = (cos(angle*0.0174532925) * 55) / (float)PHYS_SCALE;
	b2BodyDef bodyDef;
	bodyDef.type = b2_dynamicBody;
	bodyDef.position.Set(x+x_, y+y_);

	//Set as bullet
	bodyDef.bullet = true;

	m_body = World::get()->CreateBody(&bodyDef);
	b2CircleShape circleShape;
	circleShape.m_radius = 6 / (float)PHYS_SCALE;
	b2FixtureDef fixtureDef;
	fixtureDef.shape = &circleShape;
	fixtureDef.density = 0.05;
	fixtureDef.friction = 0;
	m_body->CreateFixture(&fixtureDef);
	m_body->SetUserData(this);
	texID = LoadTexturePNG("graphics/projectiles/bullet.png", texWidth, texHeight);
	initVBO();
	setvData(12, 12);
	//fire the bullet towards the direction player is looking
	m_body->ApplyForceToCenter(b2Vec2(
		force * cos(angle*0.0174532925),
		force*sin(angle*0.0174532925)), true);
	//init_rendering();
	start = std::chrono::system_clock::now();
}


Bullet::~Bullet()
{
	
}

int	Bullet::init_rendering()
{


	
	
	if (Bullet::m_dl)
		return 1;

	//
	// Prepare a display list for rendering.
	//
Bullet::m_dl = glGenLists(1);
glNewList(Bullet::m_dl, GL_COMPILE);

glBegin(GL_LINE_LOOP);
for (int i = 0; i < 360; i += 60)
{
	glVertex3f(
		cos(0.0174532925*(i)) * 6,
		sin(0.0174532925*(i)) * 6,
		0.0);
}
glEnd();
glEndList();
return (glGetError() == GL_NO_ERROR);
}
int Bullet::init()
{
	return 0;
}
void Bullet::finish(bool collide)
{
	if (!finishing)
	{
		float x = m_body->GetPosition().x*PHYS_SCALE;
		float y = m_body->GetPosition().y*PHYS_SCALE;
		if (collide)
		{
			Explosion* explosion = new Explosion(x, y, 3);
			Render_List::get()->push_back(explosion);
		}
		finishing = true;
	}
}

int Bullet::render()
{
	
	std::chrono::duration<double> elapsed_seconds = std::chrono::system_clock::now() - start;
	if (elapsed_seconds.count() > 5)
	{
		finish(false);
		Delete_List::get()->push_back_unique(this);
	}
	else
	{
		glColor3f(0.0, 1.0, 0.5);
		b2Vec2 pos = m_body->GetPosition();
		renderVBO(pos.x * (float)PHYS_SCALE, pos.y * (float)PHYS_SCALE, 0);
		glColor3f(1.0, 1.0, 1.0);

	}
	return 1;
	
}

void Bullet::finish_rendering()
{
	glDeleteLists(m_dl, 1);
	Bullet::m_dl = 0;
}