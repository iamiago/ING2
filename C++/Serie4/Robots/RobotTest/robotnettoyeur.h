#ifndef ROBOTNETTOYEUR_H
#define ROBOTNETTOYEUR_H

#include "robot.h"
class RobotNettoyeur: public Robot
{
    public:
        RobotNettoyeur(int x, int y, Monde &m);
        void parcourir();
        void nettoyer();


    protected:

    private:
};

#endif // ROBOTNETTOYEUR_H
