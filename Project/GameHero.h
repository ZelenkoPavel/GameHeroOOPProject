#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include "Artifact.h"

using namespace std;

class Hero {
private:

	string name;
	int level;
	int health;
	int damage;
	int defense;
	double crit_damage;
	double crit_chance;

public:
	//srand(time(NULL));

	Hero() : name("Traveler"), level(0), health(rand() % 1000 + 1000), 
		damage(rand() % 20 + 20), defense(10), crit_damage(50), crit_chance(5){}

	Hero(string name) : name(name), level(0), health(rand() % 1000 + 1000),
		damage(rand() % 20 + 20), defense(10), crit_damage(50), crit_chance(5){}

	Hero(string name, int level, int health, int damage, int defense,
		double crit_damage, double crit_chance) : name(name), level(level), health(health),
		damage(damage), defense(defense),crit_damage(crit_damage), crit_chance(crit_chance){}

	string getInfoAboutHero();

	~Hero(){}


	string getName();
	void setName(string name);

	int getLevel();
	void getLevel(int level);

	int getHealth();
	void setHealth(int health);

	int getDamage();
	void setDamage(int damage);

	int getDefense();
	void setDefense(int defense);

	double getCritDamage();
	void setCritDamage(double crit_damage);

	double getCritChanc();
	void setCritChanc(double crit_chance);

	Hero operator+(Artifact artifact);

};