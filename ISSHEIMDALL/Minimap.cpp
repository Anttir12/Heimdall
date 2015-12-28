#include "Minimap.h"

void Minimap::renderToTexture()
{
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferName);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	renderBackdrop();
	renderUnitsToMinimap();
	glBindFramebuffer(GL_FRAMEBUFFER, 0);

}
void Minimap::initTexture(){
	textureID = LoadTexturePNG("Hud/hudMAPBACK.png");
}

void Minimap::renderBackdrop()
{
	glEnable(GL_BLEND);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D, textureID);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex3f(0, 0, 0);
	glTexCoord2f(1, 0); glVertex3f(width, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(width, height, 0);
	glTexCoord2f(0, 1); glVertex3f(0, height, 0);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);
}

void Minimap::renderUnitsToMinimap()
{
	glPushMatrix();
	float multiply = 1 / 0.1f;
	Player::get().setCameraToPlayer(0.1f);
	//glScalef(0.2, 0.2, 1);
	glTranslatef((-WIDTH / 2 * multiply) + (width / 2)*multiply, (-HEIGHT / 2 * multiply) + (height / 2) * multiply, 1);
	Render_List::get()->render_to_minimap();
	glColor3f(1.0, 1.0, 1.0);
	glPopMatrix();
}
void Minimap::render()
{
	glEnable(GL_BLEND);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D, renderedTexture);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex3f(WIDTH - width, 0, 0);
	glTexCoord2f(1, 0); glVertex3f(WIDTH, 0, 0);
	glTexCoord2f(1, 1); glVertex3f(WIDTH, height, 0);
	glTexCoord2f(0, 1); glVertex3f(WIDTH - width, height, 0);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);
}