
//NOt WORKING YET!!!!!!

//USE THE HEADER FOR NOW

//!!!!!!!!!!!!!!!!!!!S
/*#include "MainLoop.h"

int MainLoop::run()
{
	//Start Screen, return value 1 starts the game, return value 0 quits the program. 
	start.initTexture();
	SDL_UpdateWindowSurface(window);
	start.renderBackground();
	start.renderStart();
	start.renderQuit();
	SDL_GL_SwapWindow(window);
	int option = start.chosenOption();
	//if option returns 0, close the program
	if (option == 0)
		exit(EXIT_SUCCESS);

	init();

	//SDL_UpdateWindowSurface(window);

	chrono::time_point<std::chrono::system_clock> startTime, end;
	chrono::duration<double> elapsed_seconds;
	startTime = chrono::system_clock::now();
	while (running)
	{

		end = chrono::system_clock::now();
		elapsed_seconds = end - startTime;

		startTime = chrono::system_clock::now();
		timestep = elapsed_seconds.count();
		totalTime += timestep;


		//cout << "Loop time: " << timestep << endl;
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
			std::cout << "SKIPPED RENDERING! : " << RenderSkips << std::endl;
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
			//std::cout << "SKIPPED SIMULATION! : " << simulationSkips << std::endl;
		}
		Delete_List::get()->delete_and_clear();
	}

	// Clean up
	audio.close();
	SDL_DestroyWindow(window);
	SDL_Quit();
	std::cout << "SDL Closed" << endl;
	std::cout << "TotalTime: " << totalTime << endl;
	std::cout << "RenderSkips: " << RenderSkips << endl;
	std::cout << "simulationSkips: " << simulationSkips << endl;
	return 0;
}

void MainLoop::init()
{	
	Explosion::initExplosions();
	audio.playMusic();
	b2Vec2 gravity(0, 0);
	world = World::get();
	Render_List::get()->push_back(&(Player::get()));
	Player::get().setFiringMode(new FiringModeSemi());
	Player::get().load("carrier.png");
	Player::get().init();

	for (int i = 0; i < 1; ++i){
		Enemy* enemy = new Enemy(0, 0);
		Render_List::get()->push_back(enemy);
		AI_List::get().push_back(enemy);
		enemy->init();
	}
	level.loadBG("rainbow-nebula.png");//which file to load as background
	level.load("testi.txt");
	hud.init();

	uMenu.init();
	uMenu.initTextures();
	uMenu.renderToTexture();
	World::get()->SetContactListener(ContactListener::get());	
}

void MainLoop::handleEvents()
{
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

void MainLoop::render()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//clear buffers before rendering again

	//renders
	glPushMatrix();
	Player::get().setCameraToPlayer();
	level.renderBackground(Player::get().getPosition());
	Render_List::get()->render_all();
	Player::get().debugRender();
	if (mouseDown)
		deathray.drawRay();
	glPopMatrix();
	//render hud
	hud.renderToTexture();
	hud.render();
	uMenu.render();

	SDL_GL_SetSwapInterval(1);
	SDL_GL_SwapWindow(window);//update the window
}*/