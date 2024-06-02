#pragma once
#include "Animal.h"

class Dog : public Animal
{
private:
	int friendliness;
public:
	Dog() : Animal(), friendliness(100) {}
	Dog(string name, int weight, double speed, int age, int friendliness)
		: Animal(name, weight, speed, age), friendliness(friendliness) {}

	int getFriendliness();
	void setFriendliness(int friendliness);
};

