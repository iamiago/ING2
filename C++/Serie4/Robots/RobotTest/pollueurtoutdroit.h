#ifndef POLLUEURTOUTDROIT_H
#define POLLUEURTOUTDROIT_H

#include "robotpollueur.h"
class PollueurToutDroit:public RobotPollueur
{
    public:
        PollueurToutDroit( int y, Monde &m);
        void parcourir();


    protected:
        int colDepart;
    private:
};

#endif // POLLUEURTOUTDROIT_H
