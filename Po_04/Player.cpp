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

int Player::printNumberOfPlayers()
{
	return Player::numberOf;

}


