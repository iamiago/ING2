#ifndef DESSIN_H_INCLUDED
#define DESSIN_H_INCLUDED

#include "figure.h"

class Dessin: private vector<Figure*>{
public:
    Dessin(): vector<Figure*>();

    //Constructeur de copie en faisant une copie profonde
    Dessing(const Dessin & autre) :

    ~Dessin();

    //opérateur d'affectation


};
#endif // DESSIN_H_INCLUDED
