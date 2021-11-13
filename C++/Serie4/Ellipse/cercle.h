#ifndef CERCLE_H_INCLUDED
#define CERCLE_H_INCLUDED

#include "ellipse.h"

class Cercle: public Ellipse{

public:
    Cercle();
    Cercle(float x, float y, float d);
    ~Cercle();

public:
    virtual void afficher();
};

#endif // CERCLE_H_INCLUDED
