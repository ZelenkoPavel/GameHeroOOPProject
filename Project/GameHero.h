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

	Hero();
	Hero(string name_hero);
	Hero(string name_hero, int lvl, int hp, int dmg, int def, double cr_dmg, double cr_ch);

	string get_info();

	~Hero();


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