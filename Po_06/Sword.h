#pragma once
#include "Weapon.h"

class Sword  : virtual public Weapon
{
public:
	int getDamage(int playerStrength, Monster & monster) override;	
};
