#pragma once
#include "GameHero.h"


class Manager {
public:

	int getMaxDamage(Hero* heroes, int length);
	int getMinDamage(Hero* heroes, int length);

	double calcAverageDamage(Hero* heroes, int length);

	Hero getBestHero(Hero* heroes, int length);
};
