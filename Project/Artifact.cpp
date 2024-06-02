#include "Artifact.h"

void random(int& add_health, int& add_damage, int& add_defense,
	double& add_crit_damage, double& add_crit_chance) {

	srand(time(NULL));

	for (int j = 0; j < rand() % 2 + 3; j++)
	{
		switch (rand() % 5) {
		case 0: add_health += 1000; break;
		case 1: add_damage += 300; break;
		case 2: add_defense += 300; break;
		case 3: add_crit_damage += 10; break;
		case 4: add_crit_chance += 5; break;
		}
	}
}

Artifact::Artifact() : name_artifact("no name"){

	random(add_health, add_damage, add_defense, add_crit_damage, add_crit_chance);
}
Artifact::Artifact(string name_artifact) : name_artifact(name_artifact){

	random(add_health, add_damage, add_defense, add_crit_damage, add_crit_chance);
}


string Artifact::getNameOfArtifact() {
	return name_artifact;
}
void Artifact::setNameOfArtifact(string name_artifact) {
	this->name_artifact = name_artifact;
}

string Artifact::getUsage() {
	return usage ? "true" : "false";
}
void Artifact::setUsage() {
	usage = !usage;
}

int Artifact::getAddHealth() {
	return add_health;
}
int Artifact::getAddDamage() {
	return add_damage;
}
int Artifact::getAddDefense() {
	return add_defense;
}
double Artifact::getAddCritDamage() {
	return add_crit_damage;
}
double Artifact::getAddCritChanc() {
	return add_crit_chance;
}

string Artifact::getInfoAboutArtifact() {
	string msg = "";
	msg += name_artifact + "\n";
	msg += "AddHealth - " + to_string(add_health) + "\n";
	msg += ";AddDamage - " + to_string(add_damage) + "\n";
	msg += ";AddDefense - " + to_string(add_defense) + "\n";
	msg += ";AddCritDamage - " + to_string(add_crit_damage) + "\n";
	msg += ";AddCritChanc - " + to_string(add_crit_chance) + ".\n";

	return msg;
}