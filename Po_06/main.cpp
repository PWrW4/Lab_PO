#define WINDOWS

#ifdef LINUX
#include <unistd.h>
#endif
#ifdef WINDOWS
#include <windows.h>
#endif
#include <time.h>
#include "Monster.h"
#include "Player.h"
#include <iostream>
#include "Sword.h"
#include "Bow.h"
#include "Fist.h"

using std::cout;
using std::endl;

void combatLoop(Player &player, Monster &monster);
void mySleep(unsigned int milliseconds);

int main() {
	srand(time(0));

	Player * P = new Player("Maciek",10,20,2,10);
	Weapon * W = new Fist("miecz Waldka");
	P->setWeapon(W);
	Monster * M = createRandomMonster();
	combatLoop(*P, *M);
	//delete M;
	//delete P;
	//delete W;
	int a;
	cin >> a;
}

void combatLoop(Player &player, Monster &monster) {
    cout << "----------------------------" << endl;
    cout << "Zaczynasz walke z potworem: " << endl;
	bool wygrana=false;
	monster.print();

    for (int i = 0; i < 10; i++) {
        player.attack(monster);
		cout << "HP Monstra:" << monster.getHealth() << endl;
        if(monster.getHealth()<=0)
        {
			cout << "Wygrales" << endl;
			wygrana = true;
			break;
        }
		monster.attack(player);
		cout << "HP Gracza:" << player.getHealth() << endl;
		if (player.getHealth()<=0)
		{
			cout << "Zostales pokonany" << endl;
			wygrana = true;
			break;
		}


        mySleep(1000);
	}
	if (!wygrana) {
		cout << "------------------------------------" << endl;
		cout << "Jestes zbyt zmeczony by kontynuowac dalej walke" << endl;
	}
}



void mySleep(unsigned int milliseconds) {
#ifdef LINUX
    usleep(milliseconds * 1000);
#endif
#ifdef WINDOWS
    Sleep(milliseconds);
#endif
}