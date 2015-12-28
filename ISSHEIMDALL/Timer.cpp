#include "Timer.h"

float Timer::getElapsedTime(std::chrono::time_point<std::chrono::system_clock> start, std::chrono::time_point<std::chrono::system_clock> end)
{
	std::chrono::duration<double> elapsed_seconds;
	elapsed_seconds = end - start;
	return elapsed_seconds.count();
}

float Timer::getElapsedTime(std::chrono::time_point<std::chrono::system_clock> start)
{

	std::chrono::duration<double> elapsed_seconds;
	elapsed_seconds = std::chrono::system_clock::now() - start;
	return elapsed_seconds.count();
}