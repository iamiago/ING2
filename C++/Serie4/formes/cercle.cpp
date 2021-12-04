#include"cercle.h"
#include<iostream>
using namespace std;

  Cercle :: Cercle(double x = 0.0) : rayon(x) {
    cout << "Construction d'un cercle de rayon " << rayon << endl;
  }

  Cercle :: Cercle(const Cercle& autre) : Figure(autre), rayon(autre.rayon) {
    cout << "Copie d'un cercle de rayon " << rayon << endl;
  }

   Cercle :: ~Cercle() { cout << "Destruction d'un cercle" << endl; }



  void Cercle :: affiche() const {
    cout << "Un cercle de rayon " << rayon << endl;
  }

  Figure* Cercle :: copie() const {
      return new Cercle(*this);
  }
