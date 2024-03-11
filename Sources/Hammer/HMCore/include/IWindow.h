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
		
	

		virtual void OnUpdate() = 0;

		virtual uint32_t GetWidth() const = 0;
		virtual uint32_t GetHeight() const = 0;

		virtual void SetEventCallback(const EventCallbackFn& callback) = 0;
		virtual void SetVSync(bool enabled) = 0;
		virtual bool IsVSync() const = 0;

		virtual void* GetNativeWindow() const = 0;

	};

	
}