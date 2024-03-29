#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hero {
public:
	string name;
	int level;
	int health;
	int damage;
	int defense;
	double crit_damage;
	double crit_chance;

	Hero() {
		name = "Traveler";
		level = 0;
		health = 1000;
		damage = 20;
		defense = 60;
		crit_damage = 10.0;
		crit_chance = 5.0;
	}

	string get_info() {
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

};