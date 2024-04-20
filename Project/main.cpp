#include "GameHero.h"
#include "Manager.h"
#include <iostream>

using namespace std;

int main() {

	Hero Hu_Tao("Hu Tao", 90, 30000, 3257, 127, 329.5, 50.27);

	cout << "Before damage Hu Tao - " << Hu_Tao.getDamage() << endl;

	Hu_Tao.setDamage(5374);

	cout << "After damage Hu Tao - " << Hu_Tao.getDamage() << endl;

	return 0;
}