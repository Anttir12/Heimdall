#include "Hud.h"

Hud::Hud()
{
	minimap.sets(300);
	minimap.init();
	minimap.initTexture();
	state.init();
	state.initTextures();//loads ship and frame for different states
	digits.init();
	digits.initTextures();
	resourceText.loadText("texts/Resources.png");

}

void Hud::renderToTexture()
{
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferName);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	minimap.renderToTexture();
	minimap.render();
	state.renderToTexture();
	state.render();
	digits.renderToTexture(Player::get().getResources(), WIDTH - 150, HEIGHT - 100);
	resourceText.renderToTexture(WIDTH - 290, HEIGHT - 99);
	digits.render();
	glBindFramebuffer(GL_FRAMEBUFFER, 0);
	
}

void Hud::render()
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