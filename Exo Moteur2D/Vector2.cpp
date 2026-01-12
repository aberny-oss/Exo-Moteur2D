#include "Vector2.h"


float Vector2::GetX()
{
	return m_x;
}

float Vector2::GetY()
{
	return m_y;
}


void Vector2::Set(float newX, float newY)
{
	m_x = newX;
	m_y = newY;
}
