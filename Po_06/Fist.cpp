#include "Fist.h"

int Fist::getAdditionalDamage()
{
	return 1;
}

Fist::Fist(string fist_name) : Weapon(fist_name)
{
}

int Fist::getDamage(int playerStrength, Monster& monster)
{
	if (rand() % 2)
	{
		return 0;
	}
		return getAdditionalDamage() + playerStrength + monster.getDefence();	
}
