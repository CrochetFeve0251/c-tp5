//
// Created by cf0 on 11/02/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "Pokemon.h"

void testPokemon(){
    Pokemon p1("test", "test");
    std::cout << p1 << std::endl;
    std::cin >> p1;
    std::cout << p1 << std::endl;
}

void searchPikachu(std::vector v) {
    for(Pokemon p : v)
        if(p.name == "Pikachu")
            std::cout << p << std::endl;
}

void sortPokemons(std::vector v){
    std::sort(v.begin(),v.end());
    for(Pokemon p : v)
        std::cout << p << std::endl;
}

int main() {
    testPokemon();
    return 0;
}