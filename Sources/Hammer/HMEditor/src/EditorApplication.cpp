#include "EditorApplication.h"
#include <iostream>


Hammer::Editor::EditorApplication::EditorApplication()	
	
{
	Init();
}

Hammer::Editor::EditorApplication::EditorApplication(const std::string& p_projectPath, const std::string& p_projectName) 
{
	Init();
}

Hammer::Editor::EditorApplication::~EditorApplication()
{
	ShutDown();
}

void Hammer::Editor::EditorApplication::Init()
{
	Hammer::Core::ServiceLocator::Provide<Hammer::Core::Timer>(new Hammer::Core::Timer());
	timer = Hammer::Core::ServiceLocator::Resolve< Hammer::Core::Timer>();
	Hammer::Core::ServiceLocator::Provide<Hammer::Core::IWindow>(new EditorWindow(1280, 750, "Hammer"));
	window = Hammer::Core::ServiceLocator::Resolve< Hammer::Core::IWindow>();
}

void Hammer::Editor::EditorApplication::Run()
{
	timer->Update();
	std::cout << "time now:" << timer->GetTimeNow() << std::endl;
	window->OnUpdate();
}

void Hammer::Editor::EditorApplication::ShutDown()
{

}

