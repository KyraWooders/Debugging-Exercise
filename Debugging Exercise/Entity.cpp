#include "Entity.h"



Entity::Entity()
{
}


Entity::~Entity()
{
}

int Entity::attack()
{
	return 0;
}

void Entity::takeDamage(int damage)
{
	
}

bool Entity::isAlive()
{
	if (health <= 0)
	{
		return false;
	}
	return true;
}
