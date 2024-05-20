#pragma once
#include "GameHero.h"
#include <iostream>
#include <string>

using namespace std;

class Squad
{

private:
	Hero* list;
	int size = 0;

public:
	int getSize();
	void add(Hero hero);
	void remove(Hero hero);
	void remove(int index);
	Hero get(int index);
	string getInfo();
	int findFirstIndex(Hero hero);
	//...
};

