#include "Sword.h"


Sword::Sword(string name_string) : Weapon(name_string)
{
}


int Sword::getAdditionalDamage()
{
	return 4;
}


int Sword::getDamage(int playerStrength, Monster& monster)
{
	if (MonsterType::DRAGON == monster.getType())
	{
		return 0;
	}
	return getAdditionalDamage() + playerStrength - monster.getDefence();
}
