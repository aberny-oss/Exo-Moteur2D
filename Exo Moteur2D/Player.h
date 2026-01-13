#pragma once
#include <iostream>
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, Alive, AMovable, IAttacker
{
private:

	Vector2 pos = GetPosition();

public:

	Player(float x, float y, float maxHP, float currentHP, Vector2 dir, float speed) : Entity(x, y), Alive(maxHP, currentHP), AMovable(x, y, speed) {}

	void Created();

	void TakeDamage(float damage) override;

	void Move();

	void Attack(Alive* palive) override;
};

