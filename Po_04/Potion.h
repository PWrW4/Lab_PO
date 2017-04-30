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

	bool operator==(const Potion & potion);
};

//std::ostream &operator<<(std::ostream out, const Potion &potion);

