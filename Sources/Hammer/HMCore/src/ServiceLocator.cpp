
#include "ServiceLocator.h"
std::unordered_map<int, std::shared_ptr<void>> Hammer::Core::ServiceLocator::m_instances = std::unordered_map<int, std::shared_ptr<void>>();
void Hammer::Core::ServiceLocator::Clear()
{
    m_instances.clear();
}
