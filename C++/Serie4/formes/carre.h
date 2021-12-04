#ifndef CARRE_H_INCLUDED
#define CARRE_H_INCLUDED

#include"figure.h"

class Carre : public Figure {
public:

  Carre(double x) ;

 Carre(const Carre& autre) ;

  ~Carre() ;

  Figure* copie() const;

  void affiche() const ;

private:
  double cote;
};


#endif // CARRE_H_INCLUDED
