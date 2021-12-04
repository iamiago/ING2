#include <iostream>
#include "carre.h"

using namespace std;

 Carre :: Carre(double x = 0.0) : cote(x) {
    cout << "Construction d'un carre de cote " << cote << endl;
  }

 Carre :: Carre(const Carre& autre) : Figure(autre), cote(autre.cote) {
    cout << "Copie d'un carre de cote " << cote << endl;
  }

  Carre :: ~Carre() { cout << "Destruction d'un carre" << endl; }


 Figure* Carre :: copie() const { return new Carre(*this); }

  void Carre :: affiche() const {
    cout << "Un carre de cote " << cote << endl;
  }
