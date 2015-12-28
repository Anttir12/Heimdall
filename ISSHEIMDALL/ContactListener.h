#pragma once

#include <Box2D/Box2D.h>


/*
Collision handler (singleton).
*/
class ContactListener : public b2ContactListener
{
public:

	static ContactListener* get()
	{
		if (!ContactListener::m_instance)
			ContactListener::m_instance = new ContactListener();
		return ContactListener::m_instance;
	}

	// Contact callbacks.
	void BeginContact(b2Contact*);
	void EndContact(b2Contact*)		{}

private:

	ContactListener()				{}
	~ContactListener()				{}

	// (Singleton) instance.
	static ContactListener* m_instance;
};


