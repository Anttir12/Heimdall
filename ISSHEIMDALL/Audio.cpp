#include <SDL.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <string>
#include "Audio.h"
#include "Timer.h"

using namespace std;

/*
TODO:
This class probably needs some kind of refactoring!
*/
Mix_Music* Audio::gMusic;
Mix_Chunk* Audio::gBullet1;
Mix_Chunk* Audio::gOwnEngine;
Mix_Chunk* Audio::gExplosion;

Audio::Audio()
{
	Mix_AllocateChannels(32);
	start = Timer::get().getTime();
}

Audio :: ~Audio()
{

}

int Audio :: init()
{
	return 0;
}
void Audio::playMusic(){
	if (gMusic == NULL)
		loadMedia();
	Mix_PlayMusic(gMusic, -1);
	
}

void Audio::playBulletSound(int channel)
{
	if (gBullet1 == NULL)
		loadBulletSound1();
	Mix_PlayChannel(-1, gBullet1, 0);
	
	
}

void Audio::playExplosionSound(int channel)
{
	if (gExplosion == NULL)
		loadExplosionSound();
	cout << "Channel: " << Mix_PlayChannel(-1, gExplosion, 0) << endl;
}

void Audio::playOwnEngineSound(int channel)
{
	if (gOwnEngine == NULL)
		loadOwnEngineSound();


	if (Timer::get().getElapsedTime(start) >= 0.65){
		if (gOwnEngine == NULL)
			loadOwnEngineSound();
		Mix_PlayChannel(-1, gOwnEngine, 0);

		start = Timer::get().getTime();
	}
	
}



bool Audio::loadMedia()
{
	bool success = true;
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
	{
		printf("SDL_Mixer could not initialize! SDL_Mixer Error: %s\n", Mix_GetError());
		success = false;
	}

	gMusic = Mix_LoadMUS("sounds/CodeEternity.wav");
	if (gMusic == NULL)
	{
		printf("Failed to load music! SDL_mixer Error %s\n", Mix_GetError());
	}
	Mix_VolumeMusic(32);
	
	return success;
}

bool Audio::loadBulletSound1()
{
	bool success = true;
	//SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 1)
	{
		printf("SDL_Mixer could not initialize! SDL_Mixer Error: %s\n", Mix_GetError());
		success = false;
	}

	gBullet1 = Mix_LoadWAV("sounds/space_cannon.wav");  //pitää olla 16-bit syvyydeltään
	Mix_VolumeChunk(gBullet1, 30);
	if (gBullet1 == NULL)
	{
		printf("Failed to load Cannon1 Sound! SDL_mixer Error %s\n", Mix_GetError());
	}
	
	
	return success;
}

bool Audio::loadOwnEngineSound()
{
	bool success = true;
	//SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
	
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
	{
		printf("SDL_Mixer could not initialize! SDL_Mixer Error: %s\n", Mix_GetError());
		success = false;
	}

	gOwnEngine = Mix_LoadWAV("sounds/EngineSound.wav");  //pitää olla 16-bit syvyydeltään
	Mix_VolumeChunk(gOwnEngine, 30);
	if (gOwnEngine == NULL)
	{
		printf("Failed to load Own Engine Sound! SDL_mixer Error %s\n", Mix_GetError());
	}


	return success;
}

bool Audio::loadExplosionSound()
{
	bool success = true;
	//SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
	{
		printf("SDL_Mixer could not initialize! SDL_Mixer Error: %s\n", Mix_GetError());
		success = false;
	}

	gExplosion = Mix_LoadWAV("sounds/Explosion1.wav");  //pitää olla 16-bit syvyydeltään
	if (gExplosion == NULL)
	{
		printf("Failed to load explosion Sound! SDL_mixer Error %s\n", Mix_GetError());
	}


	return success;
}

void Audio :: close(){
	Mix_FreeMusic(gMusic);
	Mix_FreeChunk(gBullet1);
	Mix_FreeChunk(gOwnEngine);
	Mix_FreeChunk(gExplosion);
	
	Mix_Quit();
}

