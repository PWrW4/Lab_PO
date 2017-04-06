#include "Potion.h"


Potion::Potion(const std::string &name) :name(name)
{
	cout << "Potion::Potion(const std::string &name) :name(name)" << endl;
}

Potion::~Potion()
{
	cout << "~Potion" << endl;
}


Potion::Potion(const Potion &other)
{
	name = other.name;
}


const string Potion::getName() const
{
	return name;
}

void Potion::printPotionType()
{
	cout << "unknown Potion" << endl;
}


/*std::ostream& operator<<(std::ostream out, const Potion& potion)
{
out << potion.getName();
return out;
}*/
