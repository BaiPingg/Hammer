#pragma once
#include "IWindow.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
namespace Hammer::Editor
{

	class EditorWindow : public Hammer::Core::IWindow
	{
	private:
		GLFWwindow* window;
		
	public:
		EditorWindow(const uint32_t width, const uint32_t height, std::string title);
		~EditorWindow() ;

		 void OnUpdate() override;

		 uint32_t GetWidth()const  override;
		 uint32_t GetHeight() const override;

		 void SetEventCallback(const EventCallbackFn& callback) override;
		 void SetVSync(bool enabled) override;
		 bool IsVSync() const override;
		 void* GetNativeWindow() const override;
	};
}