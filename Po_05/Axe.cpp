#include "Axe.h"

Axe::Axe(int _damage,string _name) : Item(_name)
{
	damage = _damage;
}

int Axe::getDamage() const
{
	return damage;
}