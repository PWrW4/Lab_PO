#pragma once

#include <string>
#include <vector>
#include "Monster.h"
#include "Weapon.h"

class Player {
    std::string name;
    int strength;
    int mana;
    int defence;
    double health;
	Weapon * weapon;
public:
    

	// constructors and destructors
    Player(const std::string &name, int strength, int mana, int defence, double health);

    virtual ~Player();

    //methods
    void print() const;

    void attack(Monster &monster);

    // getters and setters
    const std::string &getName() const;

	void setWeapon(Weapon * w);

	Weapon getWeapon();

    void setName(const std::string &name);

    int getStrength() const;

    void setStrength(int attack);

    int getMana() const;

    void setMana(int magic);

    int getDefence() const;

    void setDefence(int defence);

    double getHealth() const;

    void setHealth(double health);
};