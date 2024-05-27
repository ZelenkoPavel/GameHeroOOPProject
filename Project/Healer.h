#pragma once
#include "GameHero.h"

class Healer : public Hero
{
private:
	int amount_healing;
public:
	Healer() : Hero("Traveler", 0, rand() % 1000 + 1000,
		rand() % 20 + 20,10, 50, 5) , amount_healing(rand() % 300 + 100) {}

	Healer(string name) : Hero(name), amount_healing(rand() % 300 + 100) {}

	Healer(int amount_healing) : Hero("Traveler", 0, rand() % 1000 + 1000,
		rand() % 20 + 20, 10, 50, 5), amount_healing(amount_healing) {}

	Healer(string name, int amount_healing) : Hero(name), amount_healing(amount_healing) {}

	Healer(string name, int level, int health, int damage, int defense,
		double crit_damage, double crit_chance, int amount_healing) : Hero(name,
			level, health, damage, defense, crit_damage, crit_chance), amount_healing(amount_healing) {}

	~Healer() {}

	int getAmountHealing();
	void setAmountHealing(int amount_healing);

	string getInfoAboutHealer();
};

