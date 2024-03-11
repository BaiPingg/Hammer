#pragma once
#include "IApplication.h"
#include "IWindow.h"
#include "EditorWindow.h"
#include "ServiceLocator.h"
#include "Timer.h"

#include <memory>
namespace Hammer::Editor
{
	class EditorApplication : public Hammer::Core::IApplication
	{
		
	private :
		std::shared_ptr<Hammer::Core::IWindow> window;
		std::shared_ptr<Hammer::Core::Timer> timer;
		bool isRunning =  true;
	public:
		EditorApplication();
		EditorApplication(const std::string& p_projectPath, const std::string& p_projectName);
		~EditorApplication();

		void Init() override;
		void Run() override;
		bool IsRunning()override { return isRunning; };
		void ShutDown() override;
	};


}