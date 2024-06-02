#pragma once
#include "Animal.h"

class Giraffe : public Animal
{
private:
	int number_of_spots;
public:
	Giraffe() : Animal(), number_of_spots(1000){}

	Giraffe(string name, int number_of_spots)
		: Animal(name), number_of_spots(number_of_spots) {}

	Giraffe(string name, int weight, int number_of_spots)
		: Animal(name, weight), number_of_spots(number_of_spots) {}

	Giraffe(string name, int weight, double speed, int number_of_spots)
		: Animal(name, weight, speed), number_of_spots(number_of_spots) {}

	Giraffe(string name, int weight, double speed, int age, int number_of_spots)
		: Animal(name, weight, speed, age), number_of_spots(number_of_spots) {}

	int getNumberOfSpots();
	void setNumberOfSpots(int number_of_spots);
};

