#ifndef ROBOTPOLLUEUR_H
#define ROBOTPOLLUEUR_H

#include "robot.h"
class RobotPollueur: public Robot
{
    public:
        RobotPollueur(int x, int y, Monde &m);
        void polluer();

    protected:

    private:
};

#endif // ROBOTPOLLUEUR_H
