#pragma once
#include "Weapon.h"

class Bow : virtual public Weapon
{
	int getAdditionalDamage();
public:
	Bow(string bow_name);
	int getDamage(int playerStrength, Monster & monster);
};
