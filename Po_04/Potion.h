#pragma once
#include "Header.h"

class Potion
{
	std::string name;

public:
	Potion(const string &name);

	Potion(const Potion &other);

	const string getName() const;
};

//std::ostream &operator<<(std::ostream out, const Potion &potion);

