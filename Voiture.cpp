#include <iostream>
#include "Voiture.h"
using namespace std;

Voiture::Voiture(): marque("Ford"), couleur("Rouge"), pilote("Personne"), vitesse(0){}

Voiture::Voiture(string mark, string color){
    this.marque = mark;
    this.couleur = color;
}


