//
// Created by cf0 on 11/02/19.
//
#include <iostream>
#include "Pokemon.h"

void testPokemon(){
    Pokemon p1("test", "test");
    std::cout << p1 << std::endl;
    std::cin >> p1;
    std::cout << p1 << std::endl;
}

int main() {
    testPokemon();
    return 0;
}