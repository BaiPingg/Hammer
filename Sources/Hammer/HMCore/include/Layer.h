#pragma once
namespace Hammer ::Core
{
	class Layer
	{

	public:
		virtual void Update(const float deltaTime) = 0;
		virtual void PhysicUpdate() = 0;
		virtual void Render(const float deltaTime) = 0;

	};

	

}