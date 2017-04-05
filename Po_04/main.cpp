#include "Header.h"
#include "Player.h"
#include "Monster.h"


int main(int argc, char* argv[])
{
	cout << Monster::printNumberOfMonsters() << endl;
	Monster * Mons = new Monster("kuba", MonsterType::Dragon, 100, 50);
	cout << Mons->printNumberOfMonsters() << endl;
	delete Mons;
	cout << Monster::printNumberOfMonsters() << endl;
	
	
	cout << Player::printNumberOfPlayers() << endl;
	Player * Play = new Player("asd",10, 100, 50);
	cout << Play->printNumberOfPlayers() << endl;	
	delete Play;
	cout << Player::printNumberOfPlayers() << endl;

	int aasdasd;
	cin >> aasdasd;
	return 0;
}
