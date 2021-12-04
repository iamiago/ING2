#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED

#include "figure.h"


class Cercle: public Figure{

public:
    Cercle(double r);
    Cercle(const Cercle & autre);
    ~Cercle();


protected:
    double rayon;
};

#endif // CERCLE_H_INCLUDED
