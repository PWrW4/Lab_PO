#pragma once
#include <iostream>
#include <string.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

enum class MonsterClass
{
	Ghost,
	Dragon,
};

struct Monster
{
	string name;
	MonsterClass Class;
	int attack;
	int health;
};


