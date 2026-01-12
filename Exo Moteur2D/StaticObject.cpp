#include "StaticObject.h"

void StaticObject::Created()
{
	Vector2 pos = GetPosition();
	std::cout << "Static Object just created at x = " << pos.GetX() << " and y = " << pos.GetY() << std::endl;

}
