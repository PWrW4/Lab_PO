#include "Bow.h"

int Bow::getAdditionalDamage()
{
	return 3;
}

Bow::Bow(string bow_name) : Weapon(bow_name)
{
}

int Bow::getDamage(int playerStrength, Monster& monster)
{
	if (MonsterType::GHOST == monster.getType())
	{
		return 0;
	}
	return getAdditionalDamage() + playerStrength + monster.getDefence();
}
