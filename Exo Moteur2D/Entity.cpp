#include "Entity.h"

Vector2 Entity::GetPosition()
{
	return m_pos;
}

void Entity::SetPosition(float x, float y)
{
	m_pos.Set(x, y);

}
