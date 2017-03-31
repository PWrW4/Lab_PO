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
};
