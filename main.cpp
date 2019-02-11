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
    std::cout << "Pikachu: " << std::endl;
    for(Pokemon p : v)
        if(p.getNom() == "Pikachu")
            std::cout << p << std::endl;
}

void sortPokemons(std::vector<Pokemon> v){
    std::sort(v.begin(),v.end());
    std::ofstream fichier("/home/cf0/c-tp5/PokemonsTrie.txt", std::ios::out | std::ios::trunc);  //déclaration du flux et ouverture du fichier

    if(fichier)  // si l'ouverture a réuss
    {
        std::cout << "Sorted: " << std::endl;
        for(Pokemon p : v){
            std::cout << p << std::endl;
            fichier << p << std::endl;
        }
        fichier.close();  // on referme le fichier
    }
}

int main() {
    //testPokemon();
    std::ifstream ifs("/home/eisti/GitProject/c-tp5/Pokemons.txt");
    std::vector<Pokemon> pokemons;
    if (ifs) {
        Pokemon p;
    while (!ifs.eof()) {
        ifs >> p;
        if (!ifs.fail()) {
            std::cout << p;
        }
        pokemons.push_back(p);
    }
    ifs.close();
    } else {
        std::cerr << "Impossible d'ouvrir le fichier " << std::endl;
    }
    sortPokemons(pokemons);
    searchPikachu(pokemons);
}
