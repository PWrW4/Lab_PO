#pragma once
#include "Item.h"

class Axe : virtual public Item
{
	int damage;
public:
	Axe(int _damage,string _name);

	int getDamage() const;
};
