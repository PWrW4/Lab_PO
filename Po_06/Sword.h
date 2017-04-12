#pragma once
#include "Weapon.h"
#include "Header.h"

class Sword  : virtual public Weapon
{
public:
	int getDamage(int playerStrength, Monster & monster) override;	
};
