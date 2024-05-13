#include "GameHero.h"
#include "Manager.h"
#include "Squad.h"
#include <iostream>

using namespace std;

int main() {

	Hero Hu_Tao("Hu Tao", 90, 30000, 3257, 127, 329.5, 50.27);
	Hero hero1("player1", 70, 12947, 1000, 127, 105.3, 45);
	Hero hero2("player2", 20, 6000, 900, 127, 50, 21.43);
	Hero hero3("player3", 45, 11000, 3000, 127, 329.5, 50.27);

	Squad squad1;

	squad1.add(hero1);
	squad1.add(hero3);
	squad1.add(Hu_Tao);
	squad1.add(hero2);

	Squad squad2;

	Hero hero4("player4", 30, 7400, 1000, 127, 10, 25);
	Hero hero5("player5", 86, 15000, 3257, 127, 200, 50.27);
	Hero hero6("player6", 36, 5975, 500, 127, 329.5, 50.27);
	Hero hero7("player7", 78, 20000, 4567, 127, 100, 50.27);

	squad2.add(hero4);
	squad2.add(hero5);
	squad2.add(hero6);
	squad2.add(hero7);


	cout << squad1.getInfo() << endl << endl;
	cout << squad2.getInfo() << endl;

	return 0;
}