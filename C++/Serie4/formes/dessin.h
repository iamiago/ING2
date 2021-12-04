#ifndef DESSIN_H_INCLUDED
#define DESSIN_H_INCLUDED

#include"figure.h"
#include<vector>
#include<iostream>

using namespace std;

class Dessin : private vector<Figure*> {

public:

 // constructeur sans parametre
  Dessin() : vector<Figure*>() {}

  // constructeur de copie faisant une copie profonde
  Dessin(const Dessin& autre) : vector<Figure*>()
  {
      copie_profonde(autre);
  }

  ~Dessin() {
    cout << "Destruction d'un dessin" << endl;
    libere();
  }

  // op�rateur d'affectation faisant une copie profonde
  Dessin& operator=(const Dessin& autre) ;

  void ajouteFigure(const Figure& fig) ;

  void affiche() const ;

private:
  // m�thode (priv�e) servant au constructeur de copie et � l'operator=
  void copie_profonde(const Dessin& autre) ;

  // m�thode (priv�e) servant au destructeur et � l'operator=
  void libere();
};

#endif // DESSIN_H_INCLUDED
