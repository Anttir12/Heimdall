#pragma once

#include <list>
#include "Physable.h"

class Delete_List : public std::list<Physable*>
{

public:
	static Delete_List* get()
	{
		if (!Delete_List::m_instance)
			Delete_List::m_instance = new Delete_List();
		return Delete_List::m_instance;
	}

	void push_back_unique(Physable*);
	void delete_and_clear();

private:

	Delete_List()	{}
	~Delete_List()	{}

	static Delete_List* m_instance;
};

