#ifndef POLLUEURDROIT_H_INCLUDED
#define POLLUEURDROIT_H_INCLUDED


class PollueurDroit:public RobotPollueur{

public:
    PollueurSauteur(Monde & monde);
    void parcourir(); // on parcours differement
};

#endif // POLLUEURDROIT_H_INCLUDED
