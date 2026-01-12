#pragma once
#include <iostream>
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{
public:

	BreakableObject(float x, float y, float maxHP, float currentHP) : Entity(x, y), Alive(maxHP, currentHP) {}

	void Created();

	void TakeDamage(float damage) override;

};

