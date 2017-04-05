#pragma once
#include "Header.h"
#include <vector>
#include "Item.h"
#include "Potion.h"

class Player
{
	
	string name;
	int attack;
	double health;
	int magic;
	std::vector<Item> items;
	std::vector<Potion> potions;

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

	void addPotion(const Potion &potion);

	void printPotions();

	void drink(const Potion &potion);

	void addItem(const Item &item);

	void printItems();

	void equip(const Item &item);
};
