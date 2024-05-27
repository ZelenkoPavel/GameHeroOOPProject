#include "GameHero.h"
#include "Manager.h"
#include "Squad.h"
#include "Healer.h"
#include <iostream>

using namespace std;

int main() {
	Healer Barbara("Barbara");
	


	cout << Barbara.getInfoAboutHealer() << endl;

	return 0;
}