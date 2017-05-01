#pragma once
#include "Weapon.h"

class Sword  : virtual public Weapon
{
	int getAdditionalDamage() override;
public:
	Sword(string name_string);
	
	int getDamage(int playerStrength, Monster & monster) override;
};
