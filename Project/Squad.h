#pragma once
#include "GameHero.h"
#include <iostream>
#include <string>

using namespace std;

class Squad
{

private:
	Hero list[6];
	int size = 0;

public:
	int getSize();
	bool add(Hero hero);
	//bool remove(Hero hero);
	Hero get(int index);
	string getInfo();
	//...
};

