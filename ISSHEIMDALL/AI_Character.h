#pragma once

class AI_Character
{
public:
	AI_Character()			{}
	virtual ~AI_Character() {}
	virtual void run_ai() = 0;
};