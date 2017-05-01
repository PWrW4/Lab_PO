#include "Weapon.h"


int Weapon::getAdditionalDamage()
{
	return 0;
}

Weapon::Weapon(const string& _name)
{
	name = _name;
}

int Weapon::getDamage(int playerStrength, Monster& monster)
{
	return 0;
}

