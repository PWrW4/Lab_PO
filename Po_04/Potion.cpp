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

bool Potion::operator==(const Potion & potion) {
	return this->name == potion.name;
}

 /*std::ostream& operator<<(std::ostream out, const Potion& potion)
{
	out << potion.getName();
	return out;
}*/


string Potion::getName() const
{
	return name;
}
