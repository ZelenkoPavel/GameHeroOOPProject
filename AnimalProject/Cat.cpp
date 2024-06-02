#include "Cat.h"

double Cat::getTheDexterityOfDestroyingThings() {
	return the_dexterity_of_destroying_things;
}
void Cat::setTheDexterityOfDestroyingThings(
	double the_dexterity_of_destroying_things) {

	if (the_dexterity_of_destroying_things >= 0) {

		this->the_dexterity_of_destroying_things 
			= the_dexterity_of_destroying_things;
	}
}