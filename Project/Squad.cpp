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

void Squad::remove(Hero hero) {
	int index = findFirstIndex(hero);
	remove(index);
}

int Squad::findFirstIndex(Hero hero) {

	for (int i = 0; i < size; i++)
	{
		if (list[i].getName() == hero.getName()
			&& list[i].getLevel() == hero.getLevel()
			&& list[i].getHealth() == hero.getHealth()
			&& list[i].getDamage() == hero.getDamage()
			&& list[i].getDefense() == hero.getDefense()
			&& list[i].getCritDamage() == hero.getCritDamage()
			&& list[i].getCritChanc() == hero.getCritChanc()) {
			return i;
		}
	}
	return -1;
}

void Squad::remove(int index) {
	if (index >= 0 && index < size) {
		Hero* temp = new Hero[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}

		delete[] list;
		list = temp;
		size--;
	}
}

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
		s += list[i].getInfoAboutHero();
	}
	 
	return s;
}
