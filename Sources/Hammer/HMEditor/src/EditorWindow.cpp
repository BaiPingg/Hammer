#include "EditorWindow.h"


Hammer::Editor::EditorWindow::EditorWindow(const uint32_t width, const uint32_t height, std::string title)
	
{
	if (!glfwInit())
	{
		// Initialization failed
	}
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	this->window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
}

Hammer::Editor::EditorWindow::~EditorWindow()
{
}

void Hammer::Editor::EditorWindow::OnUpdate()
{
}



uint32_t Hammer::Editor::EditorWindow::GetWidth() const
{
	return 0;
}

uint32_t Hammer::Editor::EditorWindow::GetHeight() const
{
	return 0;
}

void Hammer::Editor::EditorWindow::SetEventCallback(const EventCallbackFn& callback)
{
}

void Hammer::Editor::EditorWindow::SetVSync(bool enabled)
{
}

bool Hammer::Editor::EditorWindow::IsVSync() const
{
	return false;
}

void* Hammer::Editor::EditorWindow::GetNativeWindow() const
{
	return nullptr;
}
