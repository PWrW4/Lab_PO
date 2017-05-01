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
	Play->printPotions();
	cout << endl;

	Item * M1 = new Item("M1");
	Item * M2 = new Item("M2");


	Play->addItem(*M1);
	Play->equip(*M1);
	Play->addItem(*M2);
	Play->printItems();
	Play->equip(*M2);
	Play->printItems();
	

	int aasdasd;
	cin >> aasdasd;
	return 0;
}
