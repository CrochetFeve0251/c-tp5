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
		bool operator<(const Pokemon & autre) const;
		friend std::ostream & operator<<(std::ostream & out, const Pokemon & p);
		friend std::istream & operator>>(std::istream & in, Pokemon & p);
};
