#include "GameHero.h"
#include "Manager.h"
#include "Squad.h"
#include "Healer.h"
#include "Artifact.h"
#include <iostream>

using namespace std;

int main() {
	Artifact artifact1;

	cout << artifact1.getInfoAboutArtifact() << endl;

	Hero hero;
	cout << "Before\n" << hero.getInfoAboutHero() << endl;

	Hero hero2(hero + artifact1);

	cout << "After\n" << hero2.getInfoAboutHero() << endl;

	return 0;
}