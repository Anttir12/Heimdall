#include "UpgradeMenu.h"

void UpgradeMenu::initTextures()
{
	digits.init();
	upgrade.init("Hud/Upgrade.png", 30, HEIGHT - 75);
	single.init("Hud/hudSingle.png", 100, HEIGHT - 250);
	burst.init("Hud/hudBurst.png", 100, HEIGHT - 310);
	autoMode.init("Hud/hudAuto.png", 100, HEIGHT - 370);
	missiles.init("Hud/Missiles.png", 100, HEIGHT - 450);
	repair.init("Hud/Repair.png", 100, HEIGHT - 600);
	increaseHP.init("Hud/UpgradeArmor.png", 100, HEIGHT - 670);
	chooseFiringMode.loadText("Hud/ChooseFiringMode.png");
}

void UpgradeMenu::renderToTexture()
{
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferName);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	Equipment* equipment = Player::get().getEquipment();
	FiringMode*  mode = Player::get().getFiringMode();
	upgrade.renderObject();
	digits.clear();
	chooseFiringMode.renderToTexture(100, HEIGHT - 125);
	//Render Single
	if (equipment->ownsSingle())
	{
		if (mode->getType() == Mode::SEMI)
			single.renderObject(0, 1, 0);
		else
			single.renderObject();
	}
	else
	{
		digits.renderToTexture(0, single.x + single.width + 20, single.y);
		single.renderObject(1, 0, 0);
	}
	//Render Burst
	if (equipment->ownsBurst()){
		if (mode->getType() == Mode::BURST)
			burst.renderObject(0, 1, 0);
		else
			burst.renderObject();
	}
	else
	{
		burst.renderObject(1, 0, 0);
		digits.renderToTextureNoClear(25, burst.x + burst.width + 20, burst.y);
	}
	//Rnder Auto
	if (equipment->ownsAutoMode()){
		if (mode->getType() == Mode::AUTO)
			autoMode.renderObject(0, 1, 0);
		else
		{
			autoMode.renderObject();
		}
	}
	else
	{
		autoMode.renderObject(1, 0, 0);
		digits.renderToTextureNoClear(50, autoMode.x + autoMode.width + 20, autoMode.y);
	}
	//Render Missile
	if (equipment->ownsMissiles())
		missiles.renderObject(0, 1, 0);
	else
		missiles.renderObject(1, 0, 0);
	//Render Increase max hp
	increaseHP.renderObject(0.9f, 0.9f, 0.9f);
	//Render Repair
	if(Player::get().getHP() == equipment->maxHP)
		repair.renderObject(0.6f,0.6f,0.6f);
	else
		repair.renderObject(0.6f, 1.f, 0.6f);
	digits.renderToTextureNoClear(2, repair.x + repair.width + 20, repair.y);
	digits.renderToTextureNoClear(10, increaseHP.x + increaseHP.width + 20, increaseHP.y);
	digits.render();
	single.drawBox();
	burst.drawBox();
	autoMode.drawBox();
	missiles.drawBox();
	glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

void UpgradeMenu::drawDebugClick(float x, float y)
{
	glPointSize(5);
	glBegin(GL_POINTS);
	glVertex2f(x, y);
	glEnd();
	glPointSize(1);
}

void UpgradeMenu::render()
{
	glEnable(GL_BLEND);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D, renderedTexture);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(1, 0); glVertex3f(width, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(width, height, 0);
	glTexCoord2f(0, 1); glVertex3f(0, height, 0);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);
	glDisable(GL_BLEND);
}

void UpgradeMenu::click(float x, float y)
{
	//drawDebugClick(x, y);
	Equipment* equipment = Player::get().getEquipment();
	int resources = Player::get().getResources();
	//CLICK AUTO
	if (autoMode.collidesWith(x, y)){
		if (equipment->ownsAutoMode())
			Player::get().setFiringMode(equipment->getAuto());
		else if (resources > 50){
			equipment->setAuto(new FiringModeAuto());
			Player::get().setFiringMode(equipment->getAuto());
			Player::get().setResources(resources - 50);
		}
	}
	//CLICK BURST
	else if (burst.collidesWith(x, y)){
		if (equipment->ownsBurst())
			Player::get().setFiringMode(equipment->getBurst());
		else if (resources > 15){
			equipment->setBurst(new FiringModeBurst());
			Player::get().setFiringMode(equipment->getBurst());
			Player::get().setResources(resources - 15);
		}
	}
	//CLICK SINGLE
	else if (single.collidesWith(x, y)){
		if (equipment->ownsSingle())
		{
			Player::get().setFiringMode(equipment->getSingle());
		}
		else if (resources > 5){
			equipment->setSingle(new FiringModeSemi());
			Player::get().setFiringMode(equipment->getSingle());
		}
	}
	//CLICK MISSILE
	else if (missiles.collidesWith(x, y))
	{
		if (!equipment->ownsMissiles() && resources >= 20)
			equipment->setMissile(true);
	}
	//CLICK REPAIR
	else if (repair.collidesWith(x, y))
	{
		if (Player::get().getHP() < equipment->maxHP && resources >= 2)
		{
			Player::get().addHP(1);
			Player::get().setResources(resources - 2);
		}
	}
	//CLICK INCREASE HP
	else if (increaseHP.collidesWith(x, y))
	{
		if (resources >= 10)
		{
			equipment->maxHP = equipment->maxHP + 1;
			Player::get().setResources(resources - 10);
		}
	}
	
}

int UpgradeMenu::HandleEvents()
{
	int mouseX, mouseY;
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_KEYDOWN && event.key.repeat == 0)
		{
			switch (event.key.keysym.sym)//get pressed key
			{
			case SDLK_u:
				return -1;
				break;
			case SDLK_ESCAPE:
				return -1;
				break;

			}
		}
		if (event.type == SDL_MOUSEBUTTONDOWN)
		{
			if (event.button.button == SDL_BUTTON_LEFT)
			{
				SDL_GetMouseState(&mouseX, &mouseY);
				mouseY = HEIGHT - mouseY;
				click(mouseX, mouseY);
			}
		}
	}
	return 1;
}