#include "Player.h"


Player::Monster(string name, MonsterType type, int attack, double health)
{
	Player::name = name;
	Player::monsteType = type;
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
