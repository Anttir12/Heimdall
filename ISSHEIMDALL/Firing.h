#pragma once

#include "Bullet.h"
#include "Render_List.h"
#include "Audio.h"
#include "Timer.h"

namespace Mode
{
	const int SEMI = 0, BURST = 1, AUTO = 2;
}

class FiringMode{
public:
	FiringMode() :audio(new Audio()), start(Timer::get().getTime()) {}
	virtual ~FiringMode() { }
	virtual void fire(b2Vec2 pos, float angle) = 0;
	void setEnemy(bool set)
	{
		enemy = set;
	}
	int getType(){ return type; }
protected:
	int type;
	bool enemy = false;
	std::unique_ptr<Audio> audio;
	std::chrono::time_point<std::chrono::system_clock> start;
};

/**
 * DOES NOT WORK YET (correctly)! use either burst or auto mode instead. 
 */
class FiringModeSemi : public FiringMode
{
public:
	FiringModeSemi(){ type = Mode::SEMI; };
	virtual void fire(b2Vec2 pos, float angle)
	{
		float elapsedTime = Timer::get().getElapsedTime(start);
		if (elapsedTime > 0.4)
		{
		Bullet* bullet = new Bullet(pos.x, pos.y, angle * 57.2957795f, 0.4f);
		if (enemy)
			bullet->setEnemy(true);
		Render_List::get()->push_back(bullet);
		audio->playBulletSound(3);
		start = Timer::get().getTime();
		}
	}
};
/**
 * Burst mode for firing! Fires a shot approximately every 0.05 seconds in 0.45 second intervals.
 * Does not work correctly for player as it assumes you keep shooting button (space)
 * down while you are shooting, tapping only fires one bullet.
 */
class FiringModeBurst : public FiringMode
{
public:
	FiringModeBurst(){ type = Mode::BURST; };

	virtual void fire(b2Vec2 pos, float angle)
	{
		int spray = (rand() % 21) - 10; // (rand() % accuracy+1) - accuracy/2 // lower value for accuracy makes shooting more accurate
		float elapsedTime = Timer::get().getElapsedTime(start);
		if (elapsedTime > 0.05*count)
		{
			Bullet* bullet = new Bullet(pos.x, pos.y, (angle * 57.2957795f) + spray, 0.4f);
			if (enemy)
				bullet->setEnemy(true);
			Render_List::get()->push_back(bullet);
			if (audio)
				audio->playBulletSound(3);
			++count;
			if (count > 3)
				count = 10;
			start = Timer::get().getTime();
		}
		else if (elapsedTime > 0.45)//Bursts comes in 0.45s intervals! TODO: Remove hardcoded value -> add possibility for customation
			count = 1;

	}
private:
	int count = 1;
};

/**
* Auto mode for firing! Fires a shot approximately every 0.1 seconds.
*/
class FiringModeAuto : public FiringMode
{
public:
	FiringModeAuto(int rps = 10) {
		rateOfFire = 1.0f / (float)rps;
		type = Mode::AUTO;
	}

	virtual void fire(b2Vec2 pos, float angle)
	{
		int spray = (rand() % 11) - 5; // (rand() % accuracy+1) - accuracy/2 // lower value for accuracy makes shooting more accurate
		float elapsedTime = Timer::get().getElapsedTime(start);
		if (elapsedTime > rateOfFire)
		{
			Bullet* bullet = new Bullet(pos.x, pos.y, (angle * 57.2957795f) + spray, 0.4f);
			if (enemy)
				bullet->setEnemy(true);
			Render_List::get()->push_back(bullet);
			if (audio)
				audio->playBulletSound(3);
			start = Timer::get().getTime();
		}
	}

private:
	float rateOfFire = 10;
};