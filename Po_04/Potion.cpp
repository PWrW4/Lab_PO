#include "Potion.h"

Potion::Potion(const std::string &name) :name(name)
{
	
}

Potion::~Potion()
{

}

Potion::Potion(const Potion &other)
{
	name = other.name;
}

 /*std::ostream& operator<<(std::ostream out, const Potion& potion)
{
	out << potion.getName();
	return out;
}*/


const std::string Potion::getName() const
{
	return name;
}
