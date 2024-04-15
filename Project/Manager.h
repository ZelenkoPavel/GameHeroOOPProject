#pragma once
#include "GameHero.h"


class Manager {
public:

	int getMaxDamage(Hero* heroes, int length) {
		int max = heroes[0].damage;

		for (int i = 1; i < length; i++)
		{
			if (max < heroes[i].damage) {
				max = heroes[i].damage;
			}
		}

		return max;
	}
	int getMinDamage(Hero* heroes, int length) {
		int min = heroes[0].damage;

		for (int i = 1; i < length; i++)
		{
			if (min > heroes[i].damage) {
				min = heroes[i].damage;
			}
		}

		return min;
	}

	double calcAverageDamage(Hero* heroes, int length) {
		double avarage = heroes[0].damage;

		for (int i = 1; i < length; i++)
		{
			avarage += heroes[i].damage;
		}

		return avarage / length;
	}

	Hero getBestHero(Hero* heroes, int length) {
		int bestDamage = getMaxDamage(heroes, length);


		Hero h;

		for (int i = 0; i < length; i++)
		{
			if (bestDamage == heroes[i].damage) {
				h = heroes[i];
			}
		}

		return h;
	}
};
