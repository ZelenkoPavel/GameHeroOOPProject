#include "GameHero.h"

string Hero::getInfoAboutHero() {
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


string Hero::getName() {
	return name;
}
void Hero::setName(string name) {
	this->name = name;
}

int Hero::getLevel() {
	return level;
}
void Hero::getLevel(int level) {
	if (level >= 0 && level <= 90) {
		this->level = level;
	}
}

int Hero::getHealth() {
	return health;
}
void Hero::setHealth(int health) {
	if (health > 999 && health < 99999) {
		this->health = health;
	}
}

int Hero::getDamage() {
	return damage;
}
void Hero::setDamage(int damage) {
	if (damage > 10 && damage <= 10000) {
		this->damage = damage;
	}
}

int Hero::getDefense() {
	return defense;
}
void Hero::setDefense(int defense) {
	if (defense > 10 && defense <= 10000) {
		this->defense = defense;
	}
}

double Hero::getCritDamage() {
	return crit_damage;
}
void Hero::setCritDamage(double crit_damage) {
	if (crit_damage >= 5 && crit_damage <= 600) {
		this->crit_damage = crit_damage;
	}
}

double Hero::getCritChanc() {
	return crit_chance;
}
void Hero::setCritChanc(double crit_chance) {
	if (crit_chance >= 5 && crit_chance <= 300) {
		this->crit_chance = crit_chance;
	}
}