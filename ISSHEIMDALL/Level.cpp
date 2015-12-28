#include "Level.h"
#include "Planet.h"
#include <SDL.h>
#include <SDL_opengl.h>
#include <stdio.h>
#include <SDL_image.h>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "Render_List.h"
#include "ISSHEIMDALL.h"
#include "World.h"
#include "Player.h"

using namespace std;

extern int WIDTH, HEIGHT;

vector<Planet> planets;//planets of the level are stored here
GLuint TextureID = 0;	//
Level::Level()
{
}


Level::~Level()
{
}
int Level::init()
{
	return 0;
}

//Updates everything related to certain level i.e. it updates every planet
//and later also updates the movement of the background (NYI)
void Level::update()
{
	for (auto i = planets.begin(); i != planets.end(); ++i)//iterate through list (vector) of planets and call the update method
	{
		i->update();
	}
}

//Responsible for rendering background (not working atm) and every
//planet on the level.
void Level::renderPlanets(){
	for (auto i = planets.begin(); i != planets.end(); ++i)//iterate through list (vector) of planets and call the render method
	{
		glPushMatrix();
		i->render();
		glPopMatrix();
	}
}
void Level::renderBackground(b2Vec2 pos)
{
	glBindTexture(GL_TEXTURE_2D, TextureID);
	float X = pos.x * (float)PHYS_SCALE;
	float Y = pos.y * (float)PHYS_SCALE;
	glColor3f(0.2, 0.0, 0.5);
	float scaling = Player::get().getScaling();
	//generate a quad
	glBegin(GL_QUADS);
	glTexCoord2f(0, 0); glVertex3f(X - (WIDTH*(1/scaling) / 2), Y - (HEIGHT*(1/scaling) / 2), 0);
	glTexCoord2f(1, 0); glVertex3f(X + (WIDTH*(1/scaling) / 2), Y - (HEIGHT*(1/scaling) / 2), 0);
	glTexCoord2f(1, 1); glVertex3f(X + (WIDTH*(1/scaling) / 2), Y + (HEIGHT*(1/scaling) / 2), 0);
	glTexCoord2f(0, 1); glVertex3f(X - (WIDTH*(1/scaling) / 2), Y + (HEIGHT*(1/scaling) / 2), 0);
	glEnd();
	glBindTexture(GL_TEXTURE_2D, NULL);//null needs to be changed to an object, where the pic is being bound
	//glDisable(GL_TEXTURE_2D);//this might be needed
	glColor3f(1.0, 1.0, 1.0);
}
void Level::finish()
{

}

//Loads the background image
//returns 0 if fails
int Level::loadBG(const char* file)
{
	SDL_Surface* Surface = IMG_Load(file);//loads image as surface
	if (Surface == NULL){
		cout << "ERROR: Loaded BG surface null! "<<endl;
	}
	glGenTextures(1, &TextureID);//generates texture (later we use TextureID to to tell what texture to use when rendering)
	glBindTexture(GL_TEXTURE_2D, TextureID);//which texture do we use/modify etc now
	int Mode = GL_RGB;//RGB (red green blue)
	if (Surface->format->BytesPerPixel == 4){
		Mode = GL_RGBA;//(red green blue alpha)
	}
	//Make 2D texture. See https://www.opengl.org/sdk/docs/man3/xhtml/glTexImage2D.xml
	glTexImage2D(GL_TEXTURE_2D, 0, Mode, Surface->w, Surface->h, 0, Mode, GL_UNSIGNED_BYTE, Surface->pixels);
	//How texture behaves when the target area is smaller or bigger than texture (we strech or shrink texture linearly)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

	return 1;

}

//loads current level from a text file.
//returns 0 if fails
int Level::load(const char* file)
{
	string line;//used to store one line from the file for a short period
	ifstream myfile(file);//open input stream for a file

	string delimiter = ";";//properties of planets are seperated by semicolon
	size_t pos = 0;
	string token;
	int planetInfo[4];//Planet currently has 4 properties in the text file
	if (myfile.is_open())
	{
		int i;
		//cout<< "entering while loop"<<endl;
		while (getline(myfile, line))// gets next line from a file and saves it to linne variable
		{
			i = 0;
			while ((pos = line.find(delimiter)) != std::string::npos) //this loops basically does the same thins as String.split(";") does in java
			{
				token = line.substr(0, pos);
				planetInfo[i] = std::stoi(token);
				++i;
				line.erase(0, pos + delimiter.length());
			}
			planets.insert(planets.begin(), Planet(World::get(),planetInfo[0], planetInfo[1], planetInfo[2], planetInfo[3]));//add new planet to the list (vector)
		}
		for (auto i = planets.begin(); i != planets.end(); ++i)//iterate through list (vector) of planets and call the render method
		{
			Render_List::get()->push_back(&*i);
		}



		myfile.close();

	}
	

	return 1;

}
