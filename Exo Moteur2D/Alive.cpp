#include "Alive.h"

float Alive::GetMaxHP()
{
	return m_maxHP;

}

float Alive::GetCurrentHP()
{
	return m_currentHP;

}

void Alive::TakeDamage(float damage)
{
	m_currentHP -= damage;

}

void Alive::TakeHeal(float heal)
{
	m_currentHP += heal;

}
