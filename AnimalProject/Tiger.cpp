#include "Tiger.h"

int Tiger::getNumberOfStripes() {
	return number_of_stripes;
}
void Tiger::setNumberOfStripes(int number_of_stripes) {
	if (number_of_stripes >= 0) {
		this->number_of_stripes = number_of_stripes;
	}
}