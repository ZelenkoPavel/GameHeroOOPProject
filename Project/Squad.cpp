#include "Squad.h"


int Squad::getSize() {
	return size;
}

void Squad::add(Hero hero) {
	if (size == 0) {
		list = new Hero[1];
		list[size] = hero;
	}
	else if (size < 6) {
		Hero* temp = new Hero[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}

		temp[size] = hero;
		delete[] list;
		list = temp;
	}

	size++;
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
