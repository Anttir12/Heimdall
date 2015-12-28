#pragma once

#include <list>
#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "Renderable.h"

/*
For keeping track of and for rendering of
all the renderable items. Singleton.
*/
class Render_List : public std::list<Renderable*>
{
public:

	// Instance access.
	static Render_List* get()
	{
		if (!Render_List::m_instance)
			Render_List::m_instance = new Render_List();
		return Render_List::m_instance;
	}

	// Render all items.
	void render_all();
	void render_to_minimap()
	{
		for (Render_List::iterator i = begin(); i != end(); ++i)
		{
			
			if (*i != NULL)
			{ 
				glPushMatrix();
				(*i)->render();
				glPopMatrix();
			}
			
		}
	}
private:

	Render_List()	{}
	~Render_List()	{}

	// (Singleton) instance;
	static Render_List* m_instance;
};

