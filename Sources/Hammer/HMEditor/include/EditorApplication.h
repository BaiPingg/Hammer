#pragma once
#include "IApplication.h"
#include "IWindow.h"
#include <memory>
namespace Hammer::Editor
{
	class EditorApplication : public Hammer::Core::IApplication
	{
		
	private :
		std::unique_ptr<Hammer::Core::IWindow> window;
	public:
		EditorApplication();
		EditorApplication(const std::string& p_projectPath, const std::string& p_projectName);
		~EditorApplication();

		void Init() override;
		void Run() override;
		bool IsRunning()override;
	};


}