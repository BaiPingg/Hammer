#pragma once
#include <string>
namespace Hammer::Core
{
	struct  CommandArgs
	{
		int Count;
		char** Args;
		const char* operator[](int index) const
		{

			return Args[index];
		}
	};
	struct ApplicationCreateInfo
	{
		std::string Name = "Hammer Application";
		std::string WorkingDirectory;
		CommandArgs CommandLineArgs;
	};

	 class IApplication
	{
	public:
		
	
		virtual void Init() = 0;
		virtual void Run() = 0;
		virtual	bool IsRunning() = 0;
		virtual void ShutDown() = 0;
	};
}