#pragma once

#include <iostream>

class Decision_Tree_Node
{
public: 
	Decision_Tree_Node()
	{
		_child[0] = 0;
		_child[1] = 0;
	}
	virtual ~Decision_Tree_Node()
	{
		delete _child[0];
		delete _child[1];
	}

	virtual void evaluate() = 0;
	Decision_Tree_Node* _child[2];
};


