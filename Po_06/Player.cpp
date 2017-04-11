#include <iostream>
#include "Player.h"

using std::string;
using std::cout;
using std::endl;

// constructors and destructor

Player::Player(const string &name, int strength, int mana, int defence, double health)
        : name(name),
          strength(strength),
          mana(mana),
          defence(defence),
          health(health) {
    cout << "Player has been created" << endl;
}

Player::~Player() {
    cout << "Player has been deleted" << endl;
}


// methods

void Player::print() const {
    cout << "imie   : " << name << endl;
    cout << "sila   : " << strength << endl;
    cout << "mana   : " << mana << endl;
    cout << "obrona : " << defence << endl;
    cout << "zycie  : " << health << endl;
}

// getters and setters

const string &Player::getName() const {
    return name;
}

void Player::setName(const string &name) {
    Player::name = name;
}

int Player::getStrength() const {
    return strength;
}

void Player::setStrength(int attack) {
    Player::strength = attack;
}

int Player::getMana() const {
    return mana;
}

void Player::setMana(int magic) {
    Player::mana = magic;
}

double Player::getHealth() const {
    return health;
}

void Player::setHealth(double health) {
    Player::health = health;

}

int Player::getDefence() const {
    return defence;
}

void Player::setDefence(int defence) {
    Player::defence = defence;
}

void Player::attack(Monster &monster) {
    //TODO: implement
}