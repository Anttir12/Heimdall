#include "Digits.h"

std::vector<GLuint> Digits::numberTextures;
void Digits::initTextures()
{
	if (Digits::numberTextures.empty())
	{
		Digits::numberTextures.push_back(LoadTexturePNG("texts/zero.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/one.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/two.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/three.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/four.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/five.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/six.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/seven.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/eight.png"));
		Digits::numberTextures.push_back(LoadTexturePNG("texts/nine.png"));
	}
}
int Digits::countDigits(int num){
	if (abs(num) < 10)
		return 1;
	int count = 0;
	int tmp = 0;
	while (num >= tmp * 10)
	{
		if (tmp == 0)
		{
			++tmp;
			++count;
		}

		else
		{
			tmp *= 10;
			++count;
		}
	}
	return count;
}
std::vector<int> Digits::getDigits(int num)
{
	int count = countDigits(num);
	int tmp;
	std::vector<int> digits;
	do
	{
		tmp = num / (int)pow(10, count - 1) % 10;
		digits.push_back(tmp);
		--count;
	} while (count > 0);
	return digits;
}
void Digits::renderToTexture(int num, int x_, int y_){
	x = x_;
	y = y_;
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferName);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	std::vector<int> digits = getDigits(num);
	for (std::vector<int>::iterator it = digits.begin(); it != digits.end(); ++it)
	{
		if (*it < 10)
			renderDigit(*it);
		else
			std::cout << "WARNING! Trying to render > 10" << std::endl;
		x += 15;
	}
	glBindFramebuffer(GL_FRAMEBUFFER, 0);
}
void Digits::clear()
{
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferName);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glBindFramebuffer(GL_FRAMEBUFFER, 0);
}

void Digits::renderToTextureNoClear(int num, int x_, int y_){
	x = x_;
	y = y_;
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferName);
	std::vector<int> digits = getDigits(num);
	for (std::vector<int>::iterator it = digits.begin(); it != digits.end(); ++it)
	{
		if (*it < 10)
			renderDigit(*it);
		else
			std::cout << "WARNING! Trying to render > 10" << std::endl;
		x += 15;
	}
	glBindFramebuffer(GL_FRAMEBUFFER, 0);
}
//Renders single digit (used by renderToTexture)
void Digits::renderDigit(int digit)
{
	glEnable(GL_BLEND);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D, Digits::numberTextures[digit]);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex3f(x, y + height, 0);
	glTexCoord2f(1, 0);  glVertex3f(x + width, y + height, 0);
	glTexCoord2f(1, 1);  glVertex3f(x + width, y, 0);
	glTexCoord2f(0, 1);  glVertex3f(x, y, 0);

	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);
}



void Digits::render()
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
}