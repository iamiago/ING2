#ifndef NEWTON_H_INCLUDED
#define NEWTON_H_INCLUDED

#include "racine.h"

class Newton: public Racine {

public:
    //Constructeurs
    Newton(double epsilon): Racine(epsilon) {};

    //methodes publiques
    void racine();

private:
    double f(double x);
    double df(double x);
    double itere(double x);

};

#endif // NEWTON_H_INCLUDED
