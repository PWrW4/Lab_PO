#include "StrengthPotion.h"

StrengthPotion::~StrengthPotion()
{
}

StrengthPotion::StrengthPotion(const string _name, const int _usageTime) : Potion(_name)
{
	usageTime = _usageTime;
}

void StrengthPotion::printPotionType()
{
	cout<<"usage Time: " << usageTime << endl;
}
