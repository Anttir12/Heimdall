#include "Text.h"

void Text::loadText(const char* file)
{
	renderableTexture = LoadTexturePNG(file);
}

void Text::renderToTexture(int x, int y)
{
	glEnable(GL_BLEND);

	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D, renderableTexture);
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex3f(x, y + height, 0);
	glTexCoord2f(1, 0);  glVertex3f(x + width, y + height, 0);
	glTexCoord2f(1, 1);  glVertex3f(x + width, y, 0);
	glTexCoord2f(0, 1);  glVertex3f(x, y, 0);

	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);
}

GLuint Text::LoadTexturePNG(const char* file)
{
	GLuint textureID;
	SDL_Surface* Surface = IMG_Load(file);//loads image as surface
	if (Surface == NULL){
		std::cout << "ERROR: Loaded surface null! " << file << std::endl;
	}
	glGenTextures(1, &textureID);//generates texture (later we use TextureID to to tell what texture to use when rendering)
	glBindTexture(GL_TEXTURE_2D, textureID);//which texture do we use/modify etc now
	int Mode = GL_RGB;//RGB (red green blue)
	if (Surface->format->BytesPerPixel == 4){
		Mode = GL_RGBA;//(red green blue alpha)
	}
	width = Surface->w;
	height = Surface->h;
	//Make 2D texture. See https://www.opengl.org/sdk/docs/man3/xhtml/glTexImage2D.xml
	glTexImage2D(GL_TEXTURE_2D, 0, Mode, width, height, 0, Mode, GL_UNSIGNED_BYTE, Surface->pixels);
	//How texture behaves when the target area is smaller or bigger than texture (we strech or shrink texture linearly)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
	return textureID;
}