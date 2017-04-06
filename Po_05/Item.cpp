#include "Item.h"

Item::Item(const std::string &name) :name(name)
{
	
}

Item::Item(const Item &other)
{
	name = other.name;
}

 const string Item::getName() const
{
	return name;
}