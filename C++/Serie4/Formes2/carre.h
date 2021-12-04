#ifndef CARRE_H_INCLUDED
#define CARRE_H_INCLUDED

#include "figure.h"
using namespace std;

class Carre:public Figure{
public:
    //Carre(double x= 0.0);
    Carre(double c);
    Carre( const Carre & autre);
    ~Carre();
    Figure* copie() const;
    void afficher();

protected:
    int cote;
};


#endif // CARRE_H_INCLUDED
