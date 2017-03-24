#include "Header.h"

//todo Loczba u¿ytkownika i przs³onieta metoda

string getTypeName(const Monster& monster)
{
	switch (monster.monsteType)
	{
	case MonsterType::Dragon:
		return  "Dragon";
		break;
	case MonsterType::Ghost:
		return  "Ghost";
		break;
	default:
		return "error1";
		break;
	}
}

void printMonsterData(const Monster& monster)
{
	cout << "potwor : " << monster.name << endl;
	cout << "typ : " << getTypeName(monster) << endl;
	cout << "atak : " << monster.attack << endl;
	cout << "zycie : " << monster.health << endl << endl;
}


void printPlayerData(const Player& player)
{
	cout << "Gracz : " << player.name << endl;
	cout << "magic : " << player.magic << endl;
	cout << "atak : " << player.attack << endl;
	cout << "zycie : " << player.health << endl << endl;
}

void printMonsterData(const Monster * monster)
{
	cout << "potwor : " << (*monster).name << endl;
	cout << "typ : " << getTypeName((*monster)) << endl;
	cout << "atak : " << (*monster).attack << endl;
	cout << "zycie : " << (*monster).health << endl << endl;
}


void printPlayerData(const Player * player)
{
	cout << "Gracz : " << (*player).name << endl;
	cout << "magic : " << (*player).magic << endl;
	cout << "atak : " << (*player).attack << endl;
	cout << "zycie : " << (*player).health << endl << endl;
}

Monster *createMonster(string name, MonsterType type, int  attack, double  health) {
	Monster *m = new Monster();

	(*m).name = name;
	(*m).monsteType = type;
	(*m).attack = attack;
	(*m).health = health;

	return m;
}


Player *createPlayer(string name, int magic, int  attack, double  health) {
	Player *p = new Player();

	(*p).name = name;
	(*p).magic = magic;
	(*p).attack = attack;
	(*p).health = health;

	return p;
}


int randomNumber(int min, int max)
{
	min--;
	return rand() % (max - (min)) + min + 1;
}


MonsterType randMonsterType()
{
	if (randomNumber(0, 1))
	{
		return MonsterType::Dragon;
	}
	else {
		return MonsterType::Ghost;
	}
}


Monster *createRandomMonster(string name)
{
	return createMonster(name, randMonsterType(), randomNumber(5, 20), randomNumber(10, 30));
}


int main(int argc, char* argv[])
{
	//rand init
	srand(static_cast <unsigned int>(time(nullptr)));

	//1-8
	Monster Smok = *createMonster("Tomek", MonsterType::Dragon, 30, 30);

	Player Gracz = *createPlayer("Pawel", 30, 30, 100);

	printMonsterData(Smok);
	printPlayerData(Gracz);

	printMonsterData(&Smok);
	printPlayerData(&Gracz);
	///tablica monsterow
	//9-10
	int N;
	cin >> N;

	Monster * Random = new Monster[N];

	for (int i = 0; i < N; i++)
	{
		Random[i] = *createRandomMonster("random");
		printMonsterData(Random[i]);
	}


	int aasdasd;
	cin >> aasdasd;
	return 0;
}
