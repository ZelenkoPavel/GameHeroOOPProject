#include "Manager.h"
#include "Squad.h"


int Manager::getMaxDamage(Squad squad) {
	int max = squad.get(0).getDamage();

	for (int i = 1; i < squad.getSize(); i++)
	{
		if (max < squad.get(i).getDamage()) {
			max = squad.get(i).getDamage();
		}
	}

	return max;
}
int Manager::getMinDamage(Squad squad) {
	int min = squad.get(0).getDamage();

	for (int i = 1; i < squad.getSize(); i++)
	{
		if (min > squad.get(i).getDamage()) {
			min = squad.get(i).getDamage();
		}
	}

	return min;
}

double Manager::calcAverageDamage(Squad squad) {
	double avarage = squad.get(0).getDamage();

	for (int i = 1; i < squad.getSize(); i++)
	{
		avarage += squad.get(i).getDamage();
	}

	return avarage / squad.getSize();
}

Hero Manager::getBestHero(Squad squad) {
	int bestDamage = getMaxDamage(squad);


	Hero h;

	for (int i = 0; i < squad.getSize(); i++)
	{
		if (bestDamage == squad.get(i).getDamage()) {
			h = squad.get(i);
		}
	}

	return h;
}