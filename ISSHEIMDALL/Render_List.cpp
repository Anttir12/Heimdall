#include <gl/glew.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include "render_list.h"
#include <iostream>

Render_List* Render_List::m_instance = 0;


/*
Renders list items in order. Set modelview matrix beforehand.
*/
void Render_List::render_all()
{
	std::list<Renderable*>::iterator i = begin();
	while (i != end())
	{
		glPushMatrix();
		int isActive = (*i)->render();
		if (isActive < 0)
		{
			Renderable* test = *i;
			i = erase(i);  // alternatively, i = items.erase(i);
			delete test;
			
		}
		else
			++i;
		glPopMatrix();
	}
}
