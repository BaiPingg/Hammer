#include "EditorApplication.h"
#include <iostream>
#include <EditorWindow.h>


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
}

void Hammer::Editor::EditorApplication::Init()
{
	std::cout << "Application init" << std::endl;
	window = std::make_unique<EditorWindow>(1280,750,"Hammer");
}

void Hammer::Editor::EditorApplication::Run()
{
	std::cout << "Application Run" << std::endl;
}

bool Hammer::Editor::EditorApplication::IsRunning()
{
	return true;
}
