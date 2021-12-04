#include <iostream>
using namespace std;

#include "carre.h"

Carre::Carre(double c){
    cote = c;
}
Carre::Carre( const Carre & autre){
    cote=autre.cote;
}
Carre::~Carre(){}
Figure* Carre::copie() const{}

void Carre::afficher(){
    cout << " Carre de cote : " << c.cote << endl;
}
