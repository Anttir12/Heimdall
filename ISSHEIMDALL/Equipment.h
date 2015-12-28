#pragma once

#include "Firing.h"
#include <iostream>

class Equipment
{

public:
	bool ownsSingle();
	bool ownsBurst();
	bool ownsAutoMode();
	bool ownsType(int type);
	//TODO: rename?
	void set(FiringMode* mode);
	FiringModeSemi* getSingle()	{return single;}
	FiringModeBurst* getBurst(){return burst;}
	FiringModeAuto* getAuto(){return autoMode;}
	void setSingle(FiringModeSemi* semi){ single = semi; }
	void setBurst(FiringModeBurst* burst_){ burst = burst_; }
	void setAuto(FiringModeAuto* auto_){ autoMode = auto_; }
	void increasaeMaxHP(int amount = 1){ maxHP += amount; }
	int maxHP = 10;
	bool ownsMissiles(){ return missile; }
	void setMissile(bool b){ missile = b; }
private:
	bool missile = true;
	FiringModeSemi* single = NULL;
	FiringModeBurst* burst = NULL;
	FiringModeAuto* autoMode = NULL;
};