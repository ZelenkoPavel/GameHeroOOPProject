#include "GameHero.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {
	/*Hero traveler;
	Hero hero1("Liza");
	Hero hero2("Hu Tao", 90, 30000, 3257, 127, 329.5, 50.27);

	cout << traveler.get_info() << endl;
	cout << hero1.get_info() << endl;
	cout << hero2.get_info() << endl;*/

	const int size = 3;
	Hero heroes[size]{ {},{"Liza"},{"Hu Tao", 90, 30000, 3257, 127, 329.5, 50.27} };


	Manager manager;

	cout << "Best damage is " << manager.getMaxDamage(heroes, size) << endl;
	cout << "Worst damage is " << manager.getMinDamage(heroes, size) << endl;

	return 0;
}