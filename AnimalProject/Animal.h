#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal 
{
private:
	string name;
	int weight;
	double speed;
	int age;
public:
	Animal() : name("no name"), weight(0), speed(0), age(0) {}
	Animal(string name) 
		: name(name), weight(0), speed(0), age(0) {}
	Animal(string name, int weight) 
		: name(name), weight(weight), speed(0), age(0) {}
	Animal(string name, int weight, double speed)
		: name(name), weight(weight), speed(speed), age(0) {}
	Animal(string name, int weight, double speed, int age)
		: name(name), weight(weight), speed(speed), age(age) {}

	string getName();
	void setName(string name);

	int getWeight();
	void setWeight(int weight);

	double getSpeed();
	void setSpeed(double speed);

	int getAge();
	void setAge(int age);

	string getInfo();
};

