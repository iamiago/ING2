#ifndef NETTOYEURDISTRAIT_H_INCLUDED
#define NETTOYEURDISTRAIT_H_INCLUDED

class NettoyeurDistrait: public RobotNettoyeur {

public:
    NettoyeurDistrait(Monde & monde);
    void parcourir();// il parcours differement et nettoye 1 sur 2

};

#endif // NETTOYEURDISTRAIT_H_INCLUDED
