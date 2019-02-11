//
// Created by cf0 on 11/02/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "Pokemon.h"
#include <fstream>

void testPokemon(){
    Pokemon p1("test", "test");
    std::cout << p1 << std::endl;
    std::cin >> p1;
    std::cout << p1 << std::endl;
}

void searchPikachu(std::vector<Pokemon> v) {
    for(Pokemon p : v)
        if(p.getNom() == "Pikachu")
            std::cout << p << std::endl;
}

void sortPokemons(std::vector<Pokemon> v){
    std::sort(v.begin(),v.end());
    for(Pokemon p : v)
        std::cout << p << std::endl;
}

int main() {
    testPokemon();
 std::ifstream ifs("Pokemons.txt");
 if (ifs) {
 Pokemon p;
 while (!ifs.eof()) {
 ifs >> p;
 if (!ifs.fail()) {
 std::cout << p;
 }
 }
 ifs.close();
 }
 else {
 std::cerr << "Impossible d'ouvrir le fichier " << std::endl;
 }
 }
