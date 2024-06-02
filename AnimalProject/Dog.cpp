#include "Dog.h"


int Dog::getFriendliness() {
	return friendliness;
}
void Dog::setFriendliness(int friendliness) {
	if (friendliness >= 0) {
		this->friendliness = friendliness;
	}
}