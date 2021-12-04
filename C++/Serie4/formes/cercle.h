#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED

#include"figure.h"

class Cercle : public Figure {
public:

  Cercle(double x);

  Cercle(const Cercle& autre);


   ~Cercle();

   Figure* copie() const ;

   void affiche() const ;

private:
  double rayon;

};

#endif // CERCLE_H_INCLUDED
