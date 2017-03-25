#pragma once
#include "Header.h"


class Monster
{
	
	std::string name;
	MonsterType monsteType;
	int attack;
	double health;
public:
	static int numberOf;

	Monster();

	~Monster();

	void set_name(string n);
	void set_attack(int a);
	void set_MonsterType(MonsterType t);
	void set_health(int h);

	string get_name() const;
	int get_attack() const;
	double get_health() const;
	MonsterType get_MonsterType() const;

	Monster(string name, MonsterType type, int attack, double health);

	void Monster::print(const Monster& monster);

	static int printNumberOfMonsters();
};
