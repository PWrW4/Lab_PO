#include "Item.h"

Item::Item(const std::string &name) :name(name)
{
	equiped = false;
}

Item::Item(const Item &other)
{
	name = other.name;
	equiped = other.equiped;
}

const std::string Item::getName() const
{
	return name;
}

void Item::setEquiped(bool eq)
{
	 equiped = eq;
}

bool Item::getEquiped() const
{
	return equiped;
}

bool Item::operator==(const Item & item) {
	return this->name == item.name;
}

string Item::IsEqqiped() const
{
	if (equiped)
	{
		return "equiped";
	}
	else {
		return "not equiped";

	}
}