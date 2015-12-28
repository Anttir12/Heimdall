#include "AI_List.h"


void AI_List::run_ai_for_all()
{
	for (AI_List::iterator i = begin(); i != end(); ++i)
	{
		(*i)->run_ai();
	}
}
