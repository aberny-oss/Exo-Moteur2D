#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, Alive, AMovable
{
public:

	Mob(float x, float y, float maxHP, float currentHP, Vector2 dir) : Entity(x, y), 



};

