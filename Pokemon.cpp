#include "Pokemon.h"

Pokemon::Pokemon() {}

Pokemon::Pokemon(const std::string & n, const std::string & e): nom {n}, espece {e} {};

Pokemon::Pokemon(const std::string & n, const std::string & e, int p): nom {n}, espece {e}, pointCombat {p} {};

Pokemon::~Pokemon() {};

const std::string & Pokemon::getNom() const {
	return nom;
}
