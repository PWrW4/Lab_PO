#pragma once
#include "Header.h"

class Item
{
	string name;
	bool equiped;
public:
	Item(const std::string &);

	Item(const Item &);

	const string getName() const;

	void setEquiped(bool eq);

	bool getEquiped() const;

	bool operator==(const Item & potion);

	string IsEqqiped() const;
};
