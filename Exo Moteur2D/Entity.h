#pragma once
#include "Vector2.h"

class Entity
{
private:

	Vector2 m_pos;

public:

	Entity(float x, float y) : m_pos(x, y) {}

	virtual Vector2 GetPosition();
	virtual void SetPosition(float x, float y);


};

