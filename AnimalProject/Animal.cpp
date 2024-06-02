#include "Animal.h"

string Animal::getName() {
	return name;
}
void Animal::setName(string name) {
	this->name = name;
}

int Animal::getWeight() {
	return weight;
}
void Animal::setWeight(int weight) {
	this->weight = weight;
}

double Animal::getSpeed() {
	return speed;
}
void Animal::setSpeed(double speed) {
	this->speed = speed;
}

int Animal::getAge() {
	return age;
}
void Animal::setAge(int age) {
	this->age = age;
}

string Animal::getInfo() {
	string msg = "";

	msg += "Name: " + name;
	msg += ";\nweight - " + to_string(weight);
	msg += ";\speed - " + to_string(speed);
	msg += ";\age - " + to_string(age);

	return msg;
}