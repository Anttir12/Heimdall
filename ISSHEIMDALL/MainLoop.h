#include <windows.h>
#include <stdio.h>
#include <chrono>
#include <string>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <SDL.h>
#include <Box2D/Box2D.h>
#include <tchar.h>
#include <SDL_image.h>
#include <SDL_video.h>
#include "ISSHEIMDALL.h"
#include "AI_List.h"
#include "Delete_List.h"
#include "World.h"
#include "Render_List.h"
#include "Player.h"
#include "Level.h"
#include "Planet.h"
#include "Enemy.h"
#include "ContactListener.h"
#include "Audio.h"
#include "Firing.h"
#include "StartScreen.h"
#include "Hud.h"
#include "DeathRay.h"
#include "Explosion.h"
#include "UpgradeMenu.h"
#include "Missile.h"
#include "Cursor.h"

SDL_Window *window;
SDL_GLContext glcontext;
int WIDTH;  ///< const correctness
int HEIGHT; ///< const correctness
int w, h;
class MainLoop
{
public:
	int run()
	{
		//Start Screen, return value 1 starts the game, return value 0 quits the program. 
		start.initTexture();
		SDL_UpdateWindowSurface(window);
		start.renderBackground();
		start.renderButtons();
		SDL_GL_SwapWindow(window);
		int option = start.chosenOption();
		//if option returns 0, close the program
		if (option == 0)
			exit(EXIT_SUCCESS);
		init();
		//Hide the original cursor
		SDL_ShowCursor(0);
		SDL_GetWindowSize(window, &w, &h);
		//SDL_UpdateWindowSurface(window);

		
		chrono::duration<double> elapsed_seconds;
		startTime = chrono::system_clock::now();
		while (running)
		{

			end = chrono::system_clock::now();
			elapsed_seconds = end - startTime;

			startTime = chrono::system_clock::now();
			timestep = elapsed_seconds.count();
			totalTime += timestep;

			handleEvents();
			Player::get().update(timestep);
			if (turnright)
				Player::get().right();
			if (turnleft)
				Player::get().left();
			if (forward)
				Player::get().up();
			if (backward)
				Player::get().down();
			if (firing)////TODO: USE TIME STEP
				Player::get().fire();

			//Updates


			if (totalTime < 1.0 / 60.0)
			{
				render();
			}
			else
			{
				++RenderSkips;
			}
			if (totalTime > -1.0 / 60.0)
			{
				level.update();
				AI_List::get().run_ai_for_all();
				world->Step(1.0 / 60.0, 8, 3);
				totalTime -= 1.0 / 60.0;
			}
			else
			{
				++simulationSkips;
			}
			Delete_List::get()->delete_and_clear();
		}

		// Clean up
		audio.close();
		SDL_DestroyWindow(window);
		SDL_Quit();
		std::cout << "SDL Closed" << endl;
		std::cout << "RenderSkips: " << RenderSkips << endl;
		std::cout << "simulationSkips: " << simulationSkips << endl;
		return 0;
	}

private:
	void init()
	{
		Explosion::initExplosions();
		audio.playMusic();
		b2Vec2 gravity(0, 0);
		world = World::get();
		Render_List::get()->push_back(&(Player::get()));
		Player::get().setFiringMode(new FiringModeSemi());
		Player::get().init();

		for (int i = 0; i < 1; ++i){
			Enemy* enemy = new Enemy(0, 0, new FiringModeSemi());
			Render_List::get()->push_back(enemy);
			AI_List::get().push_back(enemy);
			enemy->init();
		}
		Planet::initTextures();
		level.loadBG("graphics/backgrounds/rainbow-nebula.png");//which file to load as background
		level.load("levels/level1");
		hud.init();

		uMenu.init();
		uMenu.initTextures();	
		World::get()->SetContactListener(ContactListener::get());
	}

	void handleEvents()
	{
		SDL_GetMouseState(&mouseX, &mouseY);
		mouseY = HEIGHT - mouseY;
		while (SDL_PollEvent(&event))//do something when event discovered
		{
			if (event.type == SDL_QUIT)//break from the loop when window gets closed
				break;
			//check for keydown events
			if (event.type == SDL_KEYDOWN && event.key.repeat == 0)
			{
				switch (event.key.keysym.sym)//get pressed key
				{
				case SDLK_w:
					forward = true;
					break;
				case SDLK_s:
					backward = true;
					break;
				case SDLK_a:
					turnleft = true;
					break;
				case SDLK_d:
					turnright = true;
					break;
				case SDLK_u:
					if (!upgradeMenuOn)
						upgradeMenuOn = true;
					else
						upgradeMenuOn = false;
					break;
				case SDLK_o:
					if (scale < 1.5)
						scale = scale + 0.1;
					else if (scale <0.1)
						scale = scale + 0.01;
					break;
				case SDLK_p:
					if (scale > 0.1)
						scale = scale - 0.1;
					else if (scale > 0.01)
						scale = scale - 0.01;
					break;
				case SDLK_ESCAPE:
					running = false;
					break;
				case SDLK_SPACE:
					firing = true;
					break;
				}
			}
			//check for keyup events
			if (event.type == SDL_KEYUP)
			{
				switch (event.key.keysym.sym)//get realesed key
				{
				case SDLK_w:
					forward = false;
					break;
				case SDLK_s:
					backward = false;
					break;
				case SDLK_a:
					turnleft = false;
					break;
				case SDLK_d:
					turnright = false;
					break;
				case SDLK_SPACE:
					firing = false;
					break;
				}
			}
			if (event.type == SDL_MOUSEBUTTONDOWN)
			{

				if (event.button.button == SDL_BUTTON_LEFT)
				{
					if (upgradeMenuOn)
						uMenu.click(mouseX, mouseY);
					else
					{
						b2Vec2 target;
						b2Vec2 playerPos = Player::get().getPosition();
						target.x = playerPos.x + (mouseX - w / 2) / PHYS_SCALE;
						target.y = playerPos.y + (mouseY - h / 2) / PHYS_SCALE;
						Player::get().fireMissile(target);
					}
					mouseDown = true;
				}

			}
			if (event.type == SDL_MOUSEBUTTONUP)
			{
				if (event.button.button == SDL_BUTTON_LEFT)
				{
					mouseDown = false;
				}
			}
			//if (event.type == SDL_MOUSEMOTION){}
		}
		
	}

	void upgradeScreen()
	{
			glLoadIdentity();
			uMenu.renderToTexture();
			uMenu.render();
	}
	void render()
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//clear buffers before rendering again

		//renders
		glPushMatrix();
		Player::get().setCameraToPlayer(scale);
		level.renderBackground(Player::get().getPosition());
		Render_List::get()->render_all();
		Player::get().debugRender();
		//if (mouseDown)
			//deathray.drawRay();
		glPopMatrix();
		
		//render hud
		renderHud();	
		if (upgradeMenuOn)
			upgradeScreen();
		SDL_GL_SetSwapInterval(1);
		SDL_GL_SwapWindow(window);//update the window*/
	}
	void renderHud()
	{
		glLoadIdentity();
		hud.renderToTexture();
		hud.render();
		cursor.setPosition(mouseX, mouseY);
		glLoadIdentity();
		cursor.render();

	}
	Cursor cursor;
	StartScreen start;
	Audio audio;
	DeathRay deathray;
	b2World* world;
	Level level;
	Hud hud;
	SDL_Event event;
	UpgradeMenu uMenu;
	bool upgradeMenuOn = false;
	bool running = true, turnleft = false, turnright = false, forward = false;
	bool mouseDown = false, backward = false, firing = false, secondshoot = false;
	float timestep;
	int RenderSkips = 0;
	int mouseX, mouseY;
	int simulationSkips = 0;
	float totalTime = 0;
	float scale = 1;
	chrono::time_point<std::chrono::system_clock> startTime, end;
};
