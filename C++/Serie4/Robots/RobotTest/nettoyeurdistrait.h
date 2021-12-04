#ifndef NETTOYEURDISTRAIT_H
#define NETTOYEURDISTRAIT_H
#include "robot.h"

class NettoyeurDistrait: public Robot
{
    public:
        NettoyeurDistrait(int x, int y, Monde &m);
        void parcourir();
        void nettoyer();


    protected:

    private:
};

#endif // NETTOYEURDISTRAIT_H
