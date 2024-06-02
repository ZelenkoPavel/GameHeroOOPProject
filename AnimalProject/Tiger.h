#pragma once
#include "Animal.h"

class Tiger : public Animal
{
private:
	int number_of_stripes;
public:
	Tiger() : Animal(), number_of_stripes(100) {}
	Tiger(string name, int weight, double speed, int age, int number_of_stripes)
		: Animal(name, weight, speed, age), number_of_stripes(number_of_stripes) {}

	int getNumberOfStripes();
	void setNumberOfStripes(int number_of_stripes);
};

