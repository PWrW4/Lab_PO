#pragma once
#include "Header.h"
#include <string>
#include "Monster.h"

class Weapon
{
	string name;
	virtual int getAdditionalDamage();

public:
	Weapon(const std::string & _name);

	virtual int getDamage(int playerStrength, Monster & monster);
};
