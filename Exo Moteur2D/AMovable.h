#pragma once
#include "Vector2.h"

class AMovable
{
private:

	Vector2 m_dir;
	float m_speed;

public:

	AMovable(float x, float y, float speed) : m_dir(x, y), m_speed(speed) {}

	virtual void SetDirection(float x, float y);

	virtual void SetSpeed(float speed);

	virtual void Move() = 0;

	Vector2 GetDirection();
};

