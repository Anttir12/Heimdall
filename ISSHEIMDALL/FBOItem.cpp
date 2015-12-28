#include "FBOItem.h"

void FBOItem::init()
{
	framebufferName = 0;
	glGenFramebuffers(1, &framebufferName);
	glBindFramebuffer(GL_FRAMEBUFFER, framebufferName);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glGenTextures(1, &renderedTexture);

	glBindTexture(GL_TEXTURE_2D, renderedTexture);

	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, 0);

	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);

	glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, renderedTexture, 0);

	GLenum drawBuffers[1] = { GL_COLOR_ATTACHMENT0 };
	glDrawBuffers(1, drawBuffers);

	if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE){
		std::cout << "WARNING!! Could not initialize FBOItem!" << std::endl;
	}
	glBindFramebuffer(GL_FRAMEBUFFER, 0);
	glBindTexture(GL_TEXTURE_2D, NULL);
	glDisable(GL_BLEND);	
}

GLuint FBOItem::LoadTexturePNG(const char* file)
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