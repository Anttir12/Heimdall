#include "Movement.h"
#include <iostream>

	void Move::up(float force)
	{
		b2Vec2 forcedirection = b2Vec2(m_body->GetWorldVector(b2Vec2(force, 0)));
		m_body->ApplyForce(forcedirection, m_body->GetPosition(), true);
		speedCap();
	}
	void Move::down(float force)
	{
		b2Vec2 forcedirection = b2Vec2(m_body->GetWorldVector(b2Vec2(force, 0)));
		m_body->ApplyForce(-forcedirection, m_body->GetPosition(), true);
		speedCap();
	}
	void Move::rotateLeft(float force)
	{

		m_body->ApplyTorque(force, true);

	}
	void Move::rotateRight(float force)
	{
		m_body->ApplyTorque(-force, true);
	}

	void Move::speedCap()
	{
		b2Vec2 velocity = m_body->GetLinearVelocity();

		if (((velocity.x)*(velocity.x) + (velocity.y)*(velocity.y)) > 25)
		{
			float angleA = atan2f(velocity.y, velocity.x);
			velocity.x = cos(angleA) * 5;
			velocity.y = sin(angleA) * 5;
			m_body->SetLinearVelocity(velocity);
		}
	}
