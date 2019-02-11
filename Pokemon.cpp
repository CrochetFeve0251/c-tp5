#include "Pokemon.h"

Pokemon::Pokemon() {}

Pokemon::Pokemon(const std::string & n, const std::string & e): nom {n}, espece {e} {};

Pokemon::Pokemon(const std::string & n, const std::string & e, int p): nom {n}, espece {e}, pointCombat {p} {};

Pokemon::~Pokemon() {};

const std::string & Pokemon::getNom() const {
	return nom;
}

bool operator<(const Pokemon &lhs, const Pokemon &rhs) {
	return lhs.pointCombat < rhs.pointCombat;
}

bool operator>(const Pokemon &lhs, const Pokemon &rhs) {
	return rhs < lhs;
}

bool operator<=(const Pokemon &lhs, const Pokemon &rhs) {
	return !(rhs < lhs);
}

bool operator>=(const Pokemon &lhs, const Pokemon &rhs) {
	return !(lhs < rhs);
}

std::ostream &operator<<(std::ostream &os, const Pokemon &pokemon) {
	os << "nom: " << pokemon.nom << " espece: " << pokemon.espece << " pointCombat: " << pokemon.pointCombat;
	return os;
}

std::istream &operator>>(std::istream &in, Pokemon &p) {
	in >> p.nom >> p.espece >> p.pointCombat;
	return in;
}
