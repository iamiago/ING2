#ifndef POLLUEURSAUTEUR_H
#define POLLUEURSAUTEUR_H

#include "robotpollueur.h"
class PollueurSauteur: public RobotPollueur
{
    public:
        PollueurSauteur(int pas,int y, Monde &m);
        void parcourir();

    protected:
        int deltax;
        int colDepart;

    private:
};

#endif // POLLUEURSAUTEUR_H
