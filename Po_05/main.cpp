#include "Header.h"
#include "Player.h"
#include "Monster.h"
#include "StrengthPotion.h"
#include "HealthPotion.h"


int main(int argc, char* argv[])
{
	//konstruktory
	Potion * potion = new Potion("normalnyPotion");
	cout << endl;
	StrengthPotion * StrPotion = new StrengthPotion("StrPotion",10);
	cout << endl;
	HealthPotion * HPotion = new HealthPotion("HPotion", 10);
	cout << endl;

	Potion * testpotion = potion;
	Potion * testpotionStr = StrPotion;
	Potion * testpotionHP = HPotion;

	//9
	potion->printPotionType();
	StrPotion->printPotionType();
	HPotion->printPotionType();

	cout << endl;

	//10 & 11
	testpotion->printPotionType();
	testpotionStr->printPotionType();
	testpotionHP->printPotionType();

	cout << endl;

	//destruktory
	delete potion;
	cout << endl;
	delete StrPotion;
	cout << endl;
	delete HPotion;

	int aasdasd;
	cin >> aasdasd;
	return 0;
}
