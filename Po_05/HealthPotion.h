#pragma once
#include "Potion.h"

class HealthPotion : virtual public Potion
{
	int power;

public:
	~HealthPotion();

	HealthPotion(const string _name, const int _power);

	void printPotionType();
};
