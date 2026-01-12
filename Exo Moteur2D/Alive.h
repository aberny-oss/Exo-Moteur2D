#pragma once
class Alive
{
protected:

	float m_maxHP;
	float m_currentHP;

public:

	Alive(float maxHP, float currentHP) : m_maxHP(maxHP), m_currentHP(currentHP) {}

	virtual float GetMaxHP();

	virtual float GetCurrentHP();

	virtual void TakeDamage(float damage);

	virtual void TakeHeal(float heal);

};

