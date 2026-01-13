#pragma once
#include <iostream>
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, Alive, AMovable
{
public:

	Mob(float x, float y, float maxHP, float currentHP, Vector2 dir, float speed) : Entity(x, y), Alive(maxHP, currentHP), AMovable(x, y, speed) {}

	void Created();

	void TakeDamage(float damage) override;

	void Move();

};

