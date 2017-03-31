#pragma once
#include "Header.h"

class Potion
{
	string name;

public:
	Potion(const string &name);

	~Potion();

	Potion(const Potion &other);

	const string getName() const;

	void printPotionType();
};

//std::ostream &operator<<(std::ostream out, const Potion &potion);

