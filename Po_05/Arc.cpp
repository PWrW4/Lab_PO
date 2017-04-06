#include "Arc.h"

Arc::Arc(int _damage, string _name) : Item(_name)
{
	damage = _damage;
}

int Arc::getDamage() const
{
	return damage;
}