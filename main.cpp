//
// Created by cf0 on 11/02/19.
//
#include <iostream>

int main() {

 ifstream ifs("Pokemons.txt");
 if (ifs) {
 Pokemon p;
 while (!ifs.eof()) {
 ifs >> p;
 if (!ifs.fail()) {
 cout << p;
 }
 }
 ifs.close();
 }
 else {
 cerr << "Impossible d'ouvrir le fichier " << endl;
 }
 }
