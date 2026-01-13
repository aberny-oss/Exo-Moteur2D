#include "Mob.h"

void Mob::Created()
{
	Vector2 pos = GetPosition();
	Vector2 dir = GetDirection();
	std::cout << "Mob just created at x = " << pos.GetX() << " and y = " << pos.GetY() << "with " << GetMaxHP() << " life with direction x = " << dir.GetX() << " and y = " << dir.GetY() << std::endl;
}

void Mob::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	if (m_currentHP <= 0)
	{
		std::cout << "Mob just die" << std::endl;

	}

}


void Mob::Move()
{
	AMovable::Move();
	std::cout << "Mob move to x = ici-la-position-x and y = ici-la-position-y" << std::endl;

}

