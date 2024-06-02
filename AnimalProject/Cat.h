#pragma once
#include "Animal.h"

class Cat : public Animal
{
private:
	double the_dexterity_of_destroying_things;
public:
	Cat() : Animal(), the_dexterity_of_destroying_things(0) {}

	Cat(string name, int weight, double speed,
		int age, double the_dexterity_of_destroying_things)
		: Animal(name, weight, speed, age),
		the_dexterity_of_destroying_things(the_dexterity_of_destroying_things) {}

	double getTheDexterityOfDestroyingThings();
	void setTheDexterityOfDestroyingThings(
		double the_dexterity_of_destroying_things);
};

