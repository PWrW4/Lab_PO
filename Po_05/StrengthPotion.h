#pragma once
#include "Potion.h"

class StrengthPotion : virtual public Potion
{
	int usageTime;

public:
	~StrengthPotion();

	StrengthPotion(const string _name, const int _usageTime);

	void printPotionType() override;

};
