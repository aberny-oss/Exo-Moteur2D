#include "BreakableObject.h"

void BreakableObject::Created()
{
	Vector2 pos = GetPosition();
	std::cout << "Breakable Object just created at x = " << pos.GetX() << " and y = " << pos.GetY() << " with " << GetMaxHP() << "life" << std::endl;
	
}

void BreakableObject::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	if (m_currentHP <= 0)
	{
		std::cout << "Breakable Object just broke" << std::endl;
	}


}
