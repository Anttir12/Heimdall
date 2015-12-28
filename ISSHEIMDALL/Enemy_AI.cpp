#include <math.h>
#include <stdlib.h>
#include "ISSHEIMDALL.h"
#include "bullet.h"
#include "player.h"
#include "enemy.h"
#include "enemy_ai.h"
#include "render_list.h"

void Decide_Shooting::evaluate()
{
	b2Vec2 pos = m_enemy->getPosition();
	float player_x = Player::get().get_body()->GetPosition().x;
	float player_y = Player::get().get_body()->GetPosition().y;
	float distance = PHYS_SCALE * sqrt(pow(player_x - pos.x, 2) + pow(player_y - pos.y, 2));

	if (distance < 500)
	{
		m_enemy->lookTowardsTarget(player_x, player_y);
		m_enemy->fire(player_x, player_y);
	}
	else
	{
		m_enemy->lookTowardsTarget(player_x, player_y);
		m_enemy->moveTowardsTarget(player_x, player_y);
	}
}

void Is_Player_Close::evaluate()
{	
	float player_x = Player::get().get_body()->GetPosition().x;
	float player_y = Player::get().get_body()->GetPosition().y;
	float enemy_x = m_enemy->get_body()->GetPosition().x;
	float enemy_y = m_enemy->get_body()->GetPosition().y;
	float distance = PHYS_SCALE * sqrt(pow(player_x - enemy_x, 2) + pow(enemy_y - player_y, 2));

	if (distance < 1000){
		_child[1]->evaluate();
	}
}

void Far_From_Home::evaluate()
{
	if (!m_enemy->hasHomePlanet)
		_child[0]->evaluate();
	else
	{
		b2Vec2 pos = m_enemy->getPosition();
		float home_x = m_enemy->getHomePlanet()->getPos().x;
		float home_y = m_enemy->getHomePlanet()->getPos().y;
		float distance = PHYS_SCALE * sqrt(pow(home_x - pos.x, 2) + pow(home_y - pos.y, 2));
		//if enemy was ordered home
		if (m_enemy->returningHome)
		{
			//if close to home, order can be set to false
			if (distance < (m_enemy->getHomePlanet()->radius_ * PHYS_SCALE) + 450)
				m_enemy->returningHome = false;
			else
				m_enemy->returnHome();
		}
		else if (distance > m_enemy->defendRadius)
		{
			m_enemy->returningHome = true;
			m_enemy->returnHome();
		}
		else
			_child[0]->evaluate();
	}
}

void Ordered_To_Capture::evaluate()
{
	if (m_enemy->orderedToAttack)
		std::cout << "ordered to attack" << std::endl;//_child[1]->evaluate();
	else
		_child[0]->evaluate();

}


