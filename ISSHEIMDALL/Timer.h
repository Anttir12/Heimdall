#pragma once

#include <chrono>

class Timer
{
public:
	
	std::chrono::time_point<std::chrono::system_clock> getTime(){return std::chrono::system_clock::now();}

	float getElapsedTime(std::chrono::time_point<std::chrono::system_clock> start, std::chrono::time_point<std::chrono::system_clock> end);
	float getElapsedTime(std::chrono::time_point<std::chrono::system_clock> start);
	static Timer& get()
	{
		static Timer t;
		return t;
	}
private:
	
};