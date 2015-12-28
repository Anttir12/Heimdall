#include "Bullet.h"
#include "Delete_List.h"
#include "Player.h"
#include "Render_List.h"
#include "ContactListener.h"
#include "Enemy.h"
#include "Renderable.h"
#include "Projectile.h"

ContactListener* ContactListener::m_instance = 0;


void ContactListener::BeginContact(b2Contact *contact)
{
	b2Body *body_a = contact->GetFixtureA()->GetBody();
	b2Body *body_b = contact->GetFixtureB()->GetBody();
	b2Body *body_p = Player::get().get_body();
	
	//Check if one of the coliders is a bullet
	if (body_a->IsBullet() || body_b->IsBullet())
	{
		int damage = 1;

		if (body_a->IsBullet())
		{
			Projectile* bullet1 = (Projectile*)(body_a->GetUserData());
			bullet1->finish(true);
			damage = bullet1->getDamage();
			Render_List::get()->remove(bullet1);
			Delete_List::get()->push_back_unique(bullet1);
			//TODO: Convert to smart pointer!
			Renderable* renderable1 = (Renderable*)(body_b->GetUserData());
			int type1 = renderable1->getType();
			if (type1 == Type::ENEMY && !bullet1->getEnemy())
			{
				Enemy* enemy1 = (Enemy*)(body_b->GetUserData());
				enemy1->reduceHP(damage);
			}

		}
		if (body_b->IsBullet())
		{
			Projectile* bullet2 = (Projectile*)(body_b->GetUserData());
			bullet2->finish(true);
			damage = bullet2->getDamage();
			Render_List::get()->remove(bullet2);
			Delete_List::get()->push_back_unique(bullet2);
			//TODO: Convert to smart pointer!
			Renderable* renderable2 = (Renderable*)(body_a->GetUserData());
			int type2 = renderable2->getType();
			if (type2 == Type::ENEMY && !bullet2->getEnemy())
			{
				Enemy* enemy2 = (Enemy*)(body_a->GetUserData());
				enemy2->reduceHP(damage);
			}

		}
		if (body_a == body_p || body_b == body_p)
			Player::get().reduceHP(1);
			
	}
}

