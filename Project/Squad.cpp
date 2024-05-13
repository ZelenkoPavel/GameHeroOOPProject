#include "Squad.h"


int Squad::getSize() {
	return size;
}

bool Squad::add(Hero hero) {
	if (size < 6) {
		list[size] = hero;
		size++;
		return true;
	}

	return false;
}

//bool Squad::remove(Hero hero){
//}

Hero Squad::get(int index) {
	if (index >= 0 && index < size) {
		return  list[index];
	}

	return Hero();
}

string Squad::getInfo() {
	string s = "Squad of heroes: ";

	for (int i = 0; i < size; i++)
	{
		s += "\n" + to_string(i + 1) + ") ";
		s += list[i].get_info();
	}

	return s;
}
