#include "HealthPotion.h"

HealthPotion::~HealthPotion()
{
}

HealthPotion::HealthPotion(const string _name, const int _power): Potion(_name)
{
	power = _power;
}

void HealthPotion::printPotionType()
{ 
	cout << "potion power: " << power <<endl;
}
