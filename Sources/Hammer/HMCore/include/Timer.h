#pragma once
#include <chrono>
namespace Hammer::Core
{
	class Timer
	{
	public:
		double accumulator = 0.0;
	private:
		double time = 0.0;
		float timeScale = 1.0f;
		double fixedDeltaTime = 0.01;
		std::chrono::steady_clock::time_point timeNow;
		std::chrono::steady_clock::time_point preTime;
		std::chrono::steady_clock::time_point startTime;
		double deltaTime;
		
	public:
		Timer();
		~Timer();
		inline float GetTimeScale() { return timeScale; };
		inline void SetTimeScale(const float value) { timeScale = value; };
		inline double GetDeltaTime() { return deltaTime; };
		inline  double GetFixedPhysicDeltaTime() { return fixedDeltaTime; }
		inline void SetFixedPhysicDeltaTime(const double value) { fixedDeltaTime = value; }
		virtual void Init() ;
		virtual double GetTimeNow();
		virtual double GetRealTimeFromStart() ;
		virtual void Update() ;
	};
}