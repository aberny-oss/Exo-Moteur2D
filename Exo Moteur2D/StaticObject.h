#pragma once
#include <iostream>
#include "Entity.h"

class StaticObject : public Entity
{
public:

	StaticObject(float x, float y) : Entity (x, y) {}

	void Created();


};

