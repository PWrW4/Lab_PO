#include "Monster.h"


int Monster::numberOf = 0;

Monster::Monster()
{
	numberOf++;
}

Monster::~Monster()
{
	numberOf--;
}

int Monster::get_attack() const
{
	return attack;
}

double Monster::get_health() const
{
	return health;
}

string Monster::get_name() const
{
	return name;
}

MonsterType Monster::get_MonsterType() const
{
	return monsteType;}


void Monster::set_attack(int a)
{
	attack = a;
}

void Monster::set_health(int h)
{
	health = h;
}


void Monster::set_name(string n)
{
	name = n;
}


void Monster::set_MonsterType(MonsterType t)
{
	monsteType = t;
}




Monster::Monster(string name, MonsterType type, int attack, double health)
{
	Monster::numberOf++;

	Monster::name = name;
	Monster::monsteType = type;
	Monster::attack = attack;
	Monster::health = health;
}


void Monster::print(const Monster& monster)
{
	cout << "potwor : " << monster.name << endl;
	cout << "atak : " << monster.attack << endl;
	cout << "zycie : " << monster.health << endl << endl;
}

int Monster::printNumberOfMonsters()
{
	return	Monster::numberOf;
}
