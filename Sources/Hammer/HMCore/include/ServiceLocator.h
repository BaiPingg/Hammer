#pragma once

#include <memory>
#include <type_traits>
#include <unordered_map>

namespace Hammer::Core
{
	class ServiceLocator
	{
	private:
		static std::unordered_map<int, std::shared_ptr<void>> m_instances;
	public:
		static void Clear();

		template<typename T>
		static inline void Provide(T* instance = new T())
		{
			int hash = static_cast<int>(typeid(T).hash_code());
			if (m_instances.find(hash) == m_instances.end())
			{
				m_instances.emplace(hash, instance);
			}
		}

		template<typename T>
		static inline std::shared_ptr<T> Resolve()
		{
			int hash = static_cast<int>(typeid(T).hash_code());
			auto instance = m_instances.find(hash);
			if (instance != m_instances.end()) {
				return std::static_pointer_cast<T>(instance->second);
			}
			return std::shared_ptr<T>(new T());
		}
	};

}

//#define HM_PROVIDE(Type,...) ::Hammer::ServiceLocator::Provide<Type>(__VA_ARGS__)
//#define HM_SOLVE(Type)       ::Hammer::ServiceLocator::Resolve<Type>()