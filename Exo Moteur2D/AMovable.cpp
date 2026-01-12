#include "AMovable.h"
#include <cmath>

void AMovable::SetDirection(float x, float y)
{
	float d = sqrt(x * x + y * y);
	if (d == 0)
	{
		m_dir.Set(0, 0);
	}
	else
	{
		m_dir.Set(x / d, y / d);
	}

}

void AMovable::SetSpeed(float speed)
{
	m_speed = speed;

}
