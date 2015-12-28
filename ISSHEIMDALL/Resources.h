#pragma once

class Resources
{

public:
	void addBasicResources(int ammount)
	{
		basicResource += ammount;
	}
	int getBasicResource()
	{
		return basicResource;
	}
	void setBasicResourcee(int newAmmount)
	{
		basicResource = newAmmount;
	}
	
private:
	
	int basicResource = 0;
};