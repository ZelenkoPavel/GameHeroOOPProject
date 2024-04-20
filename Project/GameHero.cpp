#include "GameHero.h"

Hero::Hero() {
	srand(time(NULL));

	name = "Traveler";
	level = 0;
	health = rand() % 1000 + 1000;
	damage = rand() % 20 + 20;
	defense = 60;
	crit_damage = 10.0;
	crit_chance = 5.0;
}
Hero::Hero(string name_hero) {
	srand(time(NULL));

	name = name_hero;
	level = 0;
	health = rand() % 1000 + 1000;
	damage = rand() % 20 + 20;
	defense = 10;
	crit_damage = 10.0;
	crit_chance = 5.0;
}
Hero::Hero(string name_hero, int lvl, int hp, int dmg, int def, double cr_dmg, double cr_ch) {
	name = name_hero;
	level = lvl;
	health = hp;
	damage = dmg;
	defense = def;
	crit_damage = cr_dmg;
	crit_chance = cr_ch;
}

string Hero::get_info() {
	string msg = "";
	msg += name + "\n";
	if (level <= 20) {
		msg += "      \n";
		msg += "Level " + to_string(level) + " / 20\n\n";
	}
	else if (level <= 40) {
		msg += "*     \n";
		msg += "Level " + to_string(level) + " / 40\n\n";
	}
	else if (level <= 50) {
		msg += "**    \n";
		msg += "Level " + to_string(level) + " / 50\n\n";
	}
	else if (level <= 60) {
		msg += "***   \n";
		msg += "Level " + to_string(level) + " / 50\n\n";
	}
	else if (level <= 70) {
		msg += "****  \n";
		msg += "Level " + to_string(level) + " / 70\n\n";
	}
	else if (level <= 80) {
		msg += "***** \n";
		msg += "Level " + to_string(level) + " / 80\n\n";
	}
	else if (level <= 90) {
		msg += "******\n";
		msg += "Level " + to_string(level) + " / 90\n\n";
	}
	msg += "Max HP  " + to_string(health) + "\n";
	msg += "DMG  " + to_string(damage) + "\n";
	msg += "DEF  " + to_string(defense) + "\n";
	msg += "Crit DMG  " + to_string(crit_damage) + "%\n";
	msg += "Crit chance  " + to_string(crit_chance) + "%\n";

	return msg;
}

Hero::~Hero() {
	cout << "calling destructor" << endl;
}


string Hero::getName() {
	return name;
}
void Hero::setName(string nm) {
	name = nm;
}

int Hero::getLevel() {
	return level;
}
void Hero::getLevel(int l) {
	if (l >= 0 && l <= 90) {
		level = l;
	}
}

int Hero::getHealth() {
	return health;
}
void Hero::setHealth(int hp) {
	if (hp > 999 && hp < 99999) {
		health = hp;
	}
}

int Hero::getDamage() {
	return damage;
}
void Hero::setDamage(int dmg) {
	if (dmg > 10 && dmg < 10000) {
		damage = dmg;
	}
}

int Hero::getDefense() {
	return defense;
}
void Hero::setDefense(int def) {
	if (def > 10 && def < 10000) {
		defense = def;
	}
}

double Hero::getCritDamage() {
	return crit_damage;
}
void Hero::setCritDamage(double cr_d) {
	if (cr_d >= 5 && cr_d < 600) {
		crit_damage = cr_d;
	}
}

double Hero::getCritChanc() {
	return crit_chance;
}
void Hero::setCritChanc(double cr_ch) {
	if (cr_ch >= 5 && cr_ch < 150) {
		crit_chance = cr_ch;
	}
}