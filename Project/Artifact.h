#pragma once
#include <iostream>
#include <string>
#include <time.h>

using namespace std;
class Artifact
{
	//add --> additional
private:
	bool usage = true;
	string name_artifact;
	int add_health = 0;
	int add_damage = 0;
	int add_defense = 0;
	double add_crit_damage = 0;
	double add_crit_chance = 0;
public:
	Artifact();
	Artifact(string name_artifact);


	string getNameOfArtifact();
	void setNameOfArtifact(string name_artifact);

	string getUsage();
	void setUsage();
	
	int getAddHealth();
	
	int getAddDamage();

	int getAddDefense();

	double getAddCritDamage();

	double getAddCritChanc();

	string getInfoAboutArtifact();
};

