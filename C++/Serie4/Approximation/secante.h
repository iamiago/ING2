#ifndef SECANTE_H_INCLUDED
#define SECANTE_H_INCLUDED

#include "racine.h"

class Secante: public Racine {

public:
  //Constructeurs
    Secante(double epsilon):Racine(epsilon){};

    //Methodes publiques
    void racine();

private:
    double f(double &x);
    double itere(double &x1, double &x2);

};

#endif // SECANTE_H_INCLUDED
