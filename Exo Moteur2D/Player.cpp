#include "Player.h"

void Player::Created()
{
	Vector2 dir = GetDirection();
	std::cout << "Mob just created at x = " << pos.GetX() << " and y = " << pos.GetY() << "with " << GetMaxHP() << " life with direction x = " << dir.GetX() << " and y = " << dir.GetY() << std::endl;
}


void Player::TakeDamage(float damage)
{
	Alive::TakeDamage(damage);
	if (m_currentHP <= 0)
	{
		std::cout << "Player just died" << std::endl;
	}
}

void Player::Move()
{
	AMovable::Move();
	std::cout << "Player move to x = " << pos.GetX() << "and y = " << pos.GetY() << std::endl;
}

void Player::Attack(Alive* palive)
{
	palive->TakeDamage(10);
	std::cout << "Player just attacked.\n";
}