#pragma once
#include "Animal.h"

class Crocodile : public Animal
{
private:
	double compression;
public:
	Crocodile() : Animal(), compression(20000) {}
	Crocodile(string name, int weight, double speed, int age, double compression)
		: Animal(name, weight, speed, age), compression(compression) {}

	double getCompression();
	void setCompression(double compression);
};

