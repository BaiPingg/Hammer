#pragma once
#include <cstdint>
#include <functional>
#include "Event.h"
#include <string>
namespace Hammer::Core
{
	class IWindow
	{
	public:
		using EventCallbackFn = std::function<void(Event&)>;
		
	

		virtual void OnUpdate() {};

		virtual uint32_t GetWidth() const { return 0; };
		virtual uint32_t GetHeight() const { return 0; };

		virtual void SetEventCallback(const EventCallbackFn& callback) {};
		virtual void SetVSync(bool enabled) {};
		virtual bool IsVSync() const { return false; };
		virtual void* GetNativeWindow() const { return nullptr; };

	};

	
}