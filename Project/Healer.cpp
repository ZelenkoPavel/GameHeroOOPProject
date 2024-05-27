#include "Healer.h"


int Healer::getAmountHealing() {
	return amount_healing;
}
void Healer::setAmountHealing(int amount_healing) {
	if (amount_healing < 30000) {
		this->amount_healing = amount_healing;
	}
}

string Healer::getInfoAboutHealer() {
	string result = getInfoAboutHero();

	result += "Amount healing  " + to_string(amount_healing);

	return result;
}