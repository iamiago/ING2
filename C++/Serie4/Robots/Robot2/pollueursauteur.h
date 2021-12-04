#ifndef POLLUEURSAUTEUR_H_INCLUDED
#define POLLUEURSAUTEUR_H_INCLUDED

#include "robot.h"

class PollueurSauter:public RobotPollueur{

public:
    PollueurSauteur(Monde & monde);
    void parcourir();//Il parcours en sautant

};

#endif // POLLUEURSAUTEUR_H_INCLUDED
