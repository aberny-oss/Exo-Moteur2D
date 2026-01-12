#pragma once
class Vector2
{
private:

	float m_x;
	float m_y;

public:

	Vector2(float x, float y) : m_x(x), m_y(y) {}

	float GetX();
	float GetY();


	void Set(float newX, float newY);



};

