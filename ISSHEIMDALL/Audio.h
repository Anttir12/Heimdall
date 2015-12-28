#pragma once

#include <SDL.h> 
#include <SDL_image.h> 
#include <SDL_mixer.h> 
#include <iostream>
#include <stdio.h> 
#include <string>
#include <chrono>

class Audio{

private:

	static Mix_Music* gMusic;
	static Mix_Chunk* gBullet1;
	static Mix_Chunk* gOwnEngine;
	static Mix_Chunk* gExplosion ;

public:

	Audio();
	virtual ~Audio();
	virtual void close();
	bool loadMedia();
	bool loadBulletSound1();
	bool loadOwnEngineSound();
	bool loadExplosionSound();
	void playMusic();
	void playExplosionSound(int channel = 2);
	void playBulletSound(int channel = 2);
	void playOwnEngineSound(int channel = 2);
	virtual int init();
	std::chrono::time_point<std::chrono::system_clock> start;
};