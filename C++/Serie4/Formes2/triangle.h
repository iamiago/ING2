#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "figure.h"

class Triangle:public Figure{
public:

    Triangle(double b, double h);
    Triangle(const Triangle & autre)


protected:
    double base;
    double hauteur;
};


#endif // TRIANGLE_H_INCLUDED
