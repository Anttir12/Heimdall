#include "StateIndicator.h"

void StateIndicator::renderToTexture()
{
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferName);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_BLEND);
	renderBackdrop();
	renderHpIndicator();
	glBindFramebuffer(GL_FRAMEBUFFER, 0);

}

void StateIndicator::renderBackdrop()
{
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D, backdropTexture);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, height + 50, 0);
	glTexCoord2f(1, 1); glVertex3f(width + 50, height + 50, 0);
	glTexCoord2f(1, 0); glVertex3f(width + 50, 0, 0);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);
}

void StateIndicator::renderHpIndicator()
{
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D, healthTexture);
	glBegin(GL_QUADS);
	float hp = Player::get().getHP();
	float red = 1 - (hp / 10);
	float green = (hp / 10);
	glColor3f(red, green, 0);
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(0, 1); glVertex3f(0, height + 50, 0);
	glTexCoord2f(1, 1); glVertex3f(width + 50, height + 50, 0);
	glTexCoord2f(1, 0); glVertex3f(width + 50, 0, 0);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);
	digits.renderToTexture(hp, width - 150, 60);

	glColor3f(1, 1, 1);
}

void StateIndicator::initTextures()
{
	backdropTexture = LoadTexturePNG("Hud/hud.png");
	healthTexture = LoadTexturePNG("Hud/hudSHIP2.png");
	digits.init();
	digits.initTextures();
}
void StateIndicator::render()
{
	glEnable(GL_BLEND);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D, renderedTexture);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(1, 0); glVertex3f(WIDTH, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(WIDTH, HEIGHT, 0);
	glTexCoord2f(0, 1); glVertex3f(0, HEIGHT, 0);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);
	digits.render();
}