#include <iostream>
#include "Monster.h"
#include "Player.h"
#include <ctime>
#include "Header.h"

using std::string;
using std::cout;
using std::endl;

class MonsterNames {
public:
    static std::vector<string> dragonNames;
    static std::vector<string> goblinNames;
    static std::vector<string> ghostNames;
    static std::vector<string> demonNames;
    static std::vector<string> unknownMonsterNames;

    static std::string getRandomNameByType(MonsterType type) {
        switch(type) {
            case MonsterType::DEMON:
                return demonNames.at(rand() % demonNames.size());
            case MonsterType::GHOST:
                return ghostNames.at(rand() % ghostNames.size());
            case MonsterType ::DRAGON:
                return dragonNames.at(rand() % dragonNames.size());
            case MonsterType ::GOBLIN:
                return goblinNames.at(rand() % goblinNames.size());
            case MonsterType ::UNKNOWN:
                return unknownMonsterNames.at(rand() % unknownMonsterNames.size());
            default:
                return "";
        }
    }
};

std::vector<string> MonsterNames::dragonNames = {
        "Iannirth, The Tiran",
        "Payrid, The Tall",
        "Tughum, The White One",
        "Ildrorre, The Insane",
};

std::vector<string> MonsterNames::goblinNames = {
        "Virx",
        "Bling",
        "Ekt",
        "Hoilb",
};

std::vector<string> MonsterNames::ghostNames = {
        "Airon",
        "Curce",
        "Spiro",
        "Perry",
};

std::vector<string> MonsterNames::demonNames = {
        "Sipzuhr",
        "Rumlur",
        "Searlun",
        "Holur",
        "Oimamun",
};

std::vector<string> MonsterNames::unknownMonsterNames = {
        "The White-Eyed Nightmare Behemoth",
        "The Iron-Scaled Demon Bison",
        "The Giant Corpse Hawk",
        "The Savage Mist Owl",
        "The Gross Savage",
        "The Agile Venom Drake",
        "The Quick Hag"
};

string getTypeName(const MonsterType &type) {
    switch (type) {
        case MonsterType::DRAGON:
            return "Smok";
        case MonsterType::GOBLIN:
            return "Goblin";
        case MonsterType::GHOST:
            return "Duch";
        default:
            return "Brak implementacji";
    }
}

Monster *createRandomMonster() {
    static bool first = true;
    if (first) {
        srand(static_cast<unsigned int>(time(nullptr)));
        first = false;
    }

    Monster *m = new Monster();
    m->setType(MonsterType(rand() % 3));
    m->setName(MonsterNames::getRandomNameByType(m->getType()));
    m->setStrength(rand() % (10 - 5) + 5);
    m->setHealth(rand() % (30 - 10) + 10);
    m->setDefence(rand() % (10 - 5) + 5);
    return m;
}

// field initializations

int Monster::amount = 0;

// constructors and destructor

Monster::Monster() {
    amount++;
}

Monster::Monster(const std::string &name, MonsterType type, int strength, int defence, double health)
        : name(name),
          type(type),
          strength(strength),
          defence(defence),
          health(health) {
    amount++;
}

Monster::~Monster() {
    amount--;
}

// methods

void Monster::print() const {
    cout << "potwor : " << name << endl;
    cout << "typ    : " << getTypeName(type) << endl;
    cout << "sila   : " << strength << endl;
    cout << "obrona : " << defence << endl;
    cout << "zycie  : " << health << endl;
}

// getters and setters

const string &Monster::getName() const {
    return name;
}

void Monster::setName(const string &name) {
    Monster::name = name;
}

MonsterType Monster::getType() const {
    return type;
}

void Monster::setType(MonsterType type) {
    Monster::type = type;
}

int Monster::getStrength() const {
    return strength;
}

void Monster::setStrength(int attack) {
    Monster::strength = attack;
}

double Monster::getHealth() const {
    return health;
}

void Monster::setHealth(double health) {
    Monster::health = health;
}

int Monster::getDefence() const {
    return defence;
}

void Monster::setDefence(int defence) {
    Monster::defence = defence;
}

void Monster::attack(Player &player) {
    //TODO: implement
}
