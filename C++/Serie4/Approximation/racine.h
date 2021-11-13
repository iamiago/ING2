#ifndef RACINE_H_INCLUDED
#define RACINE_H_INCLUDED

class Racine {

public:
    //Constructeurs
    Racine(double epsilon) {precision = epsilon;}

    //Methodes publiques
    virtual void racine(void){};

protected:
    double precision;
};

#endif // RACINE_H_INCLUDED
