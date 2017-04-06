#include "StrengthPotion.h"

StrengthPotion::~StrengthPotion()
{
	cout << ":~StrengthPotion()" << endl;
}

StrengthPotion::StrengthPotion(const string _name, const int _usageTime) : Potion(_name)
{
	usageTime = _usageTime;
	cout << "StrengthPotion::StrengthPotion(const string _name, const int _usageTime) : Potion(_name)" << endl;
}

void StrengthPotion::printPotionType()
{
	cout<<"usage Time: " << usageTime << endl;
}
