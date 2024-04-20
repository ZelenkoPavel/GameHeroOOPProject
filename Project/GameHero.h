#pragma once
#include <iostream>
#include <string>
#include <time.h>

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

	Hero() : name("Traveler"), level(0), health(rand() % 1000 + 1000), 
		damage(rand() % 20 + 20), defense(10), crit_damage(50), crit_chance(5){}

	Hero(string name) : name(name), level(0), health(rand() % 1000 + 1000),
		damage(rand() % 20 + 20), defense(10), crit_damage(50), crit_chance(5){}

	Hero(string name, int level, int health, int damage, int defense,
		double crit_damage, double crit_chance) : name(name), level(level), health(health),
		damage(damage), defense(defense),crit_damage(crit_damage), crit_chance(crit_chance){}

	string get_info();

	~Hero(){}


	string getName();
	void setName(string nm);

	int getLevel();
	void getLevel(int l);

	int getHealth();
	void setHealth(int hp);

	int getDamage();
	void setDamage(int dmg);

	int getDefense();
	void setDefense(int def);

	double getCritDamage();
	void setCritDamage(double cr_d);

	double getCritChanc();
	void setCritChanc(double cr_ch);

};