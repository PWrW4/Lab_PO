#pragma once
#include "Header.h"


class Player
{
	
	string name;
	int attack;
	double health;
	int magic;

public:
	static int numberOf;

	Player();

	~Player();


	void set_name(string n);
	void set_attack(int a);
	void set_health(double h);
	void set_magic(int m);

	string get_name() const;
	int get_attack() const;
	double get_health() const;
	int get_magic() const;

	Player(string name, int magic, int attack, double health);

	void Player::print(const Player& player);

	static int printNumberOfPlayers();

};
