#include "Player.h"

class Shield {

private:


public:

	Shield::Shield(b2BodyDef *myBodyDef, b2CircleShape *objectShape, b2FixtureDef *myFixtureDef)
	{
		b2BodyDef* objectBodyDef = myBodyDef;
		b2CircleShape* shape = objectShape;
		b2FixtureDef* fixture = myFixtureDef;
	}
	void Shield :: renderShield()
	{
		b2Vec2 playerPosition = Player::get().getPosition();
		
	}

};