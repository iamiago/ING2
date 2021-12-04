#ifndef ROBOTNETTOYEUR_H_INCLUDED
#define ROBOTNETTOYEUR_H_INCLUDED

#include "robot.h"

class RobotNettoyeur: public Robot {

    public:
        RobotNettoyeur(Monde & monde);
        void parcourir();
};

#endif // ROBOTNETTOYEUR_H_INCLUDED
