#include "Manager.h"


int Manager::getMaxDamage(Hero* heroes, int length) {
	int max = heroes[0].getDamage();

	for (int i = 1; i < length; i++)
	{
		if (max < heroes[i].getDamage()) {
			max = heroes[i].getDamage();
		}
	}

	return max;
}
int Manager::getMinDamage(Hero* heroes, int length) {
	int min = heroes[0].getDamage();

	for (int i = 1; i < length; i++)
	{
		if (min > heroes[i].getDamage()) {
			min = heroes[i].getDamage();
		}
	}

	return min;
}

double Manager::calcAverageDamage(Hero* heroes, int length) {
	double avarage = heroes[0].getDamage();

	for (int i = 1; i < length; i++)
	{
		avarage += heroes[i].getDamage();
	}

	return avarage / length;
}

Hero Manager::getBestHero(Hero* heroes, int length) {
	int bestDamage = getMaxDamage(heroes, length);


	Hero h;

	for (int i = 0; i < length; i++)
	{
		if (bestDamage == heroes[i].getDamage()) {
			h = heroes[i];
		}
	}

	return h;
}