#pragma once
#include "Header.h"

class Item
{
	string name;
	bool equiped;
public:
	Item(const string &);

	Item(const Item &);

	virtual const string getName() const;
};
