#include "Sword.h"

int Sword::getDamage(int playerStrength, Monster& monster)
{
	if (MonsterType::Dragon == monster.getType())
	{
		playerStrength += 10;
	}
	return playerStrength;
}
