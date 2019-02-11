#pragma once
#include <iostream>
#include <string>

class Pokemon {
	private :
		std::string nom;
		std::string espece;
		int pointCombat = 0;
	public :
		Pokemon();
		Pokemon(const std::string & n, const std::string & e);
		Pokemon(const std::string & n, const std::string & e, int p);
		~Pokemon();   
		const std::string & getNom() const;

	friend bool operator<(const Pokemon &lhs, const Pokemon &rhs);

	friend bool operator>(const Pokemon &lhs, const Pokemon &rhs);

	friend bool operator<=(const Pokemon &lhs, const Pokemon &rhs);

	friend bool operator>=(const Pokemon &lhs, const Pokemon &rhs);

	friend std::ostream &operator<<(std::ostream &os, const Pokemon &pokemon);

	friend std::istream & operator>>(std::istream & in, Pokemon & p);
};
