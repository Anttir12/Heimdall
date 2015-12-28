#pragma once

#include <list>
#include "AI_Character.h"

class AI_List : public std::list<AI_Character*>
{
public:
	static AI_List& get()
	{
		static AI_List ai_list;
		return ai_list;
	}

	void run_ai_for_all();

private:
	AI_List()  {}
	~AI_List()  {}

//	static AI_List* m_instance;

};