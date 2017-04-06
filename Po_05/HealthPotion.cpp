#include "HealthPotion.h"

HealthPotion::~HealthPotion()
{
	cout << "~HealthPotion()" << endl;
}

HealthPotion::HealthPotion(const string _name, const int _power): Potion(_name)
{
	power = _power;
	cout << "HealthPotion::HealthPotion(const string _name, const int _power): Potion(_name)" << endl;
}

void HealthPotion::printPotionType()
{ 
	cout << "potion power: " << power <<endl;
}
