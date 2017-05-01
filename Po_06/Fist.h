#pragma once
#include "Weapon.h"


class Fist : virtual public Weapon
{
	int getAdditionalDamage();
public:
	Fist(string fist_name);
	int getDamage(int playerStrength, Monster & monster) ;
};
