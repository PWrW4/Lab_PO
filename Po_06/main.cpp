#define WINDOWS

#ifdef LINUX
#include <unistd.h>
#endif
#ifdef WINDOWS
#include <windows.h>
#endif

#include "Monster.h"
#include "Player.h"
#include <iostream>

using std::cout;
using std::endl;

void combatLoop(Player &player, Monster &monster);
void mySleep(unsigned int milliseconds);

int main() {
    //TODO: stworzenie gracza
    //TODO: stworzenie broni
    //TODO: stworzenie potwora
    //TODO: wywolanie combatLoop
    //TODO: posprzatanie pamieci
}

void combatLoop(Player &player, Monster &monster) {
    cout << "----------------------------" << endl;
    cout << "Zaczynasz walke z potworem: " << endl;

    //TODO: wypisac informacje o potworze
    for (int i = 0; i < 10; i++) {
        //TODO: gracz atakuje potwora
        //TODO: sprawdzenie czy potwor zostal zabity
        //TODO: potwor atakuje gracza
        //TODO: sprawdzenie czy gracz nie zostal zabity
        mySleep(1000);
    }
    cout << "------------------------------------" << endl;
    cout << "Jestes zbyt zmeczony by kontynuowac dalej walke" << endl;
}

void mySleep(unsigned int milliseconds) {
#ifdef LINUX
    usleep(milliseconds * 1000);
#endif
#ifdef WINDOWS
    Sleep(milliseconds);
#endif
}