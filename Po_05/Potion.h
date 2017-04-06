#pragma once
#include "Header.h"

 class Potion
{
	string name;

public:
	Potion(const string &name);

	virtual ~Potion();

	Potion(const Potion &other);

	virtual const string getName() const;

	virtual void printPotionType();
};

//std::ostream &operator<<(std::ostream out, const Potion &potion);

