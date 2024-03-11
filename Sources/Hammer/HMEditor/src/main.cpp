
#include "IApplication.h" 
#include <memory>
#include <EditorApplication.h>

std::unique_ptr<Hammer::Core::IApplication> MakeApplication(const Hammer::Core::CommandArgs& args);
int main(int argc, char** argv)
{
	auto app =MakeApplication({ argc,argv });
	
	while (app->IsRunning())
	{
		app->Run();
	}
}

std::unique_ptr<Hammer::Core::IApplication> MakeApplication(const Hammer::Core::CommandArgs& args)
{
	return std::make_unique<Hammer::Editor::EditorApplication>();
}
