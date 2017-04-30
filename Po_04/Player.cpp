#include "Player.h"

int Player::numberOf = 0;

Player::Player()
{
	numberOf++;
}

Player::~Player()
{
	numberOf--;
}

int Player::get_attack() const
{
	return attack;
}

double Player::get_health() const
{
	return health;
}

string Player::get_name() const
{
	return name;
}

int Player::get_magic() const
{
	return magic;
}

void Player::set_attack(int a)
{
	attack = a;
}

void Player::set_health(double h)
{
	health = h;
}

void Player::set_name(string n)
{
	name = n;
}


void Player::set_magic(int m)
{
	magic = m;
}




Player::Player(string name, int magic, int attack, double health)
{
	numberOf++;

	Player::name = name;
	Player::magic = magic;
	Player::attack = attack;
	Player::health = health;
}


void Player::print(const Player& player)
{
	cout << "Gracz : " << player.name << endl;
	cout << "magic : " << player.magic << endl;
	cout << "atak : " << player.attack << endl;
	cout << "zycie : " << player.health << endl << endl;
}

void Player::addPotion(const Potion& potion)
{
	potions.push_back(potion);
}

void Player::printPotions()
{
	for (Potion potion : potions)
	{
		cout << potion.getName() << endl;
	}
}

void Player::drink(const Potion& _potion)
{

	for (std::vector<Potion>::iterator it = potions.begin(); it != potions.end();)
	{
		if (*it == _potion)
		{
			it = potions.erase(it);
		}
		it++;
	}
	for (Potion potion : potions)
	{
		if (potion == _potion)
		{
			
		}
	}
}

void Player::addItem(const Item& item)
{
	items.push_back(item);
}

void Player::printItems()
{
	for (Potion potion : potions)
	{
		cout << potion.getName() << endl;
	}
}

void Player::equip(const Item& item)
{
	
}

//int Player::printNumberOfPlayers()
//{
//	return Player::numberOf;
//
//}


