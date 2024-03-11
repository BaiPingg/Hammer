#include "Timer.h"

Hammer::Core::Timer::Timer()
{
	Init();
}

Hammer::Core::Timer::~Timer()
{
}

void Hammer::Core::Timer::Init()
{
	startTime = std::chrono::steady_clock::now();
	preTime = std::chrono::steady_clock::now();
	timeNow = std::chrono::steady_clock::now();
}

double Hammer::Core::Timer::GetTimeNow()
{
	return time;
}

double Hammer::Core::Timer::GetRealTimeFromStart()
{
	return std::chrono::duration<double>(timeNow - startTime).count();
}

void Hammer::Core::Timer::Update()
{
	preTime = timeNow;
	timeNow = std::chrono::steady_clock::now();
	deltaTime =  std::chrono::duration<double>(timeNow - startTime).count();
	deltaTime *= timeScale;
	accumulator += deltaTime;
	time += deltaTime;
}	
