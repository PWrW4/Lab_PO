#include "Header.h"
#include "Player.h"
#include "Potion.h"

int main(int argc, char* argv[])
{
	Player * Play = new Player("giermek",10, 100, 50);

	Potion * Potka = new Potion("superPotka");

	Play->addPotion(*Potka);
	Play->addPotion(*new Potion("superPotka2"));
	Play->printPotions();
	Play->drink(*Potka);

	int aasdasd;
	cin >> aasdasd;
	return 0;
}
