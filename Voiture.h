#ifndef VOITURE_H_INCLUDED
#define VOITURE_H_INCLUDED
#include <string>
using namespace std;

class Voiture{
    private:
        string marque, couleur, pilote;
        int vitesse;
    public:
        Voiture();
        Voiture(string mark, string color);
        ~Voiture();
        void choix_conducteur(string name);
        void accelerer(double taux, int duree);
        void affiche_tout() const;

};

#endif // VOITURE_H_INCLUDED
