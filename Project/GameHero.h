#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hero {
public:
	string name;
	int health;
	int damage;
	int defense;
	double crit_damage;
	double crit_chance;

	Hero() {
		name = "Traveler";
		health = 1000;
		damage = 20;
		defense = 60;
		crit_damage = 10.0;
		crit_chance = 5.0;
	}

	string get_info() {
		string msg = "";
		msg += name + "\n";
		msg += "Max HP  " + to_string(health) + "\n";
		msg += "DMG  " + to_string(damage) + "\n";
		msg += "DEF  " + to_string(defense) + "\n";
		msg += "Crit DMG  " + to_string(crit_damage) + "%\n";
		msg += "Crit chance  " + to_string(crit_chance) + "%\n";

		return msg;
	}

};