#ifndef ROBOTPOLLUER_H_INCLUDED
#define ROBOTPOLLUER_H_INCLUDED

#include "robot.h"

//Lorsqu'on a besoin d'être prêt de la machine
//en reseau par exemple
//on utilise les pointeurs de pointeurs plutot que vector
//car plus rapide


//association (lien générique) héritage ,implémentation, agrégation, composition

class RobotPollueur: public Robot{

public:
    RobotPollueur(int x, int y, Monde & monde);
    void polluer();

};



#endif // ROBOTPOLLUER_H_INCLUDED
