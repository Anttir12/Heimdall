#pragma once
#include <string>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <SDL.h>
#include <SDL_opengl.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <chrono>
#include <Box2D\Box2D.h>
#include "Structs.h"
#include "ISSHEIMDALL.h"
namespace Type
{
	const int BULLET = 0, PLAYER = 1, ENEMY = 2, PLANET = 3;
}


/*VBO TESTING*/


//*********************************//


class Renderable
{
public:
	virtual int init() = 0;
	virtual int render() = 0;
	virtual ~Renderable(){}

	int getType(){ return type; }

	void initVBO()
	{
		if (texID != NULL)
		{

			//create textureCoords
			vData[0].texCoord.s = 0; vData[0].texCoord.t = 1;
			vData[1].texCoord.s = 1; vData[1].texCoord.t = 1;
			vData[2].texCoord.s = 1; vData[2].texCoord.t = 0;
			vData[3].texCoord.s = 0; vData[3].texCoord.t = 0;

			vertexData2D Data[4];

			//set index data
			iData[0] = 0;
			iData[1] = 1;
			iData[2] = 2;
			iData[3] = 3;

			//Create VBO
			glGenBuffers(1, &vboId);
			glBindBuffer(GL_ARRAY_BUFFER, vboId);
			glBufferData(GL_ARRAY_BUFFER, 4 * sizeof(vertexData2D), Data, GL_DYNAMIC_DRAW);

			//Create IBO
			glGenBuffers(1, &iboId);
			glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, iboId);
			glBufferData(GL_ELEMENT_ARRAY_BUFFER, 4 * sizeof(GLuint), iData, GL_DYNAMIC_DRAW);

			//Unbind buffers
			glBindBuffer(GL_ARRAY_BUFFER, NULL);
			glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, NULL);
		}
	}
	static GLuint LoadTexturePNG(const char* file, int& w, int& h)
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
		w = Surface->w;
		h = Surface->h;
		//Make 2D texture. See https://www.opengl.org/sdk/docs/man3/xhtml/glTexImage2D.xml
		glTexImage2D(GL_TEXTURE_2D, 0, Mode, w, h, 0, Mode, GL_UNSIGNED_BYTE, Surface->pixels);
		//How texture behaves when the target area is smaller or bigger than texture (we strech or shrink texture linearly)
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
		glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
		glBindTexture(GL_TEXTURE_2D, NULL);
		return textureID;
	}

	void renderVBO(float x, float y, float width, float height, float angle)
	{
		
		GLenum error = 0;

		vData[0].position.x = -width / 2.f; vData[0].position.y = -height / 2.f;
		vData[1].position.x =  width / 2.f; vData[1].position.y = -height / 2.f;
		vData[2].position.x =  width / 2.f; vData[2].position.y =  height / 2.f;
		vData[3].position.x = -width / 2.f; vData[3].position.y =  height / 2.f;

		glTranslatef(x, y , 0);
		glRotatef(angle, 0.0, 0.0, 1.0);
		glBindTexture(GL_TEXTURE_2D, texID);
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnable(GL_BLEND);//enables blend (transparency)
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glBindBuffer(GL_ARRAY_BUFFER, vboId);
		glBufferSubData(GL_ARRAY_BUFFER, 0, 4 * sizeof(vertexData2D), vData);
		glTexCoordPointer(2, GL_FLOAT, sizeof(vertexData2D), (GLvoid*)offsetof(vertexData2D, texCoord));
		glVertexPointer(2, GL_FLOAT, sizeof(vertexData2D), (GLvoid*)offsetof(vertexData2D, position));
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, iboId);
		glDrawElements(GL_QUADS, 4, GL_UNSIGNED_INT, NULL);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glBindTexture(GL_TEXTURE_2D, NULL);
		glBindBuffer(GL_ARRAY_BUFFER, NULL);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, NULL);
	}

	void setvData(float width, float height)
	{
		vData[0].position.x = -width / 2.f; vData[0].position.y = -height / 2.f;
		vData[1].position.x = width / 2.f; vData[1].position.y = -height / 2.f;
		vData[2].position.x = width / 2.f; vData[2].position.y = height / 2.f;
		vData[3].position.x = -width / 2.f; vData[3].position.y = height / 2.f;
	
	}
	void renderVBO(float x, float y, float angle)
	{

		//This might need some refactoring
		glTranslatef(x, y, 0);
		glRotatef(angle, 0.0, 0.0, 1.0);
		glBindTexture(GL_TEXTURE_2D, texID);
		glEnableClientState(GL_VERTEX_ARRAY);
		glEnableClientState(GL_TEXTURE_COORD_ARRAY);
		glEnable(GL_BLEND);//enables blend (transparency)
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glBindBuffer(GL_ARRAY_BUFFER, vboId);
		glBufferSubData(GL_ARRAY_BUFFER, 0, 4 * sizeof(vertexData2D), vData);
		glTexCoordPointer(2, GL_FLOAT, sizeof(vertexData2D), (GLvoid*)offsetof(vertexData2D, texCoord));
		glVertexPointer(2, GL_FLOAT, sizeof(vertexData2D), (GLvoid*)offsetof(vertexData2D, position));
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, iboId);
		glDrawElements(GL_QUADS, 4, GL_UNSIGNED_INT, NULL);
		glDisableClientState(GL_VERTEX_ARRAY);
		glDisableClientState(GL_TEXTURE_COORD_ARRAY);
		glBindTexture(GL_TEXTURE_2D, NULL);
		glBindBuffer(GL_ARRAY_BUFFER, NULL);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, NULL);
	}

	void setTexCoords(int currentFrame, int framesPerRow, int framesPerColumn)
	{
		float texture = 1 / (float)framesPerRow;
		float textX2 = (float)currentFrame*texture;
		float textX1 = textX2 - texture;
		float frameHeight = 1.f / framesPerColumn;
		int row = ceil(currentFrame / framesPerRow);
		float textY1 = (row - 1) * frameHeight;
		float textY2 = row * frameHeight;
		vData[0].texCoord.s = textX1; vData[0].texCoord.t = textY1;
		vData[1].texCoord.s = textX2; vData[1].texCoord.t = textY1;
		vData[2].texCoord.s = textX2; vData[2].texCoord.t = textY2;
		vData[3].texCoord.s = textX1; vData[3].texCoord.t = textY2;
	}
protected:
	b2Vec2 quadVertices[4];
	GLuint iData[4];
	vertexData2D vData[4];
	GLuint vboId = NULL, iboId = NULL;
	GLuint texID = NULL;
	int type = -1;
	int texWidth, texHeight;
};

