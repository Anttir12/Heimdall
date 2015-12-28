#include <algorithm>
#include <iostream>
#include "Delete_List.h"
#include "World.h"
#include "Render_List.h"
#include "Projectile.h"

Delete_List* Delete_List::m_instance = 0;


/*
Adds an item to the list (only once).
*/
void Delete_List::push_back_unique(Physable *p)
{
	if (std::find(begin(), end(), p) == end())
		push_back(p);
}


/*
Removes all the items from the World and deletes them.
Clears the list.
*/
void Delete_List::delete_and_clear()
{
	for (Delete_List::iterator i = begin(); i != end(); ++i)
	{
		World::get()->DestroyBody((*i)->get_body());
		//Whats going on here? What that Bullet doing there?
		Render_List::get()->remove((Projectile*)*i);
		
		delete (*i);
	}
	clear();
}
