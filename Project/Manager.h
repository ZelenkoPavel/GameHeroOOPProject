#pragma once
#include "GameHero.h"
#include "Squad.h"


class Manager {
public:

	int getMaxDamage(Squad squad);
	int getMinDamage(Squad squad);

	double calcAverageDamage(Squad squad);

	Hero getBestHero(Squad squad);
};
