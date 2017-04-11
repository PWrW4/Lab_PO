#pragma once

#include <string>
#include <vector>

class Player;

enum class MonsterType {
    GHOST,
    GOBLIN,
    DRAGON,
    DEMON,
    UNKNOWN,
};

class Monster {
    std::string name;
    MonsterType type;
    int strength;
    int defence;
    double health;

    static int amount;
public:
    Monster();

    Monster(const std::string &name, MonsterType type, int strength, int defence, double health);

    virtual ~Monster();

    // methods
    void print() const;

    void attack(Player &player);

    // getters and setters
    const std::string &getName() const;

    void setName(const std::string &name);

    MonsterType getType() const;

    void setType(MonsterType type);

    int getStrength() const;

    void setStrength(int attack);

    int getDefence() const;

    void setDefence(int defence);

    double getHealth() const;

    void setHealth(double health);
};

Monster *createRandomMonster();

std::string getTypeName(const MonsterType &type);