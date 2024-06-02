#include "Crocodile.h"

double Crocodile::getCompression() {
	return compression;
}
void Crocodile::setCompression(double compression) {
	if (compression > 4999 && compression < 50000) {
		this->compression = compression;
	}
}