#pragma once
#include <string>

class Potion
{
	std::string name;

public:
	Potion(const std::string &name);

	Potion(const Potion &other);

//	friend std::ostream &operator<<(std::ostream out, const Potion &potion);

	const std::string getName() const;
};

std::ostream &operator<<(std::ostream out, const Potion &potion);

