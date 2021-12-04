#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED

#include "monde.h"


//class robot et une composition de monde
//C'est une classe abstraite car on a une méthode virtual pure
class Robot{

public:
    Robot(int x, int y, Monde & m);
    ~Robot();
    void allerEn(int i, int j);
    virtual void parcourir() = 0;

protected:
    int posx;
    int posy;
    Monde & m;


private:
};


#endif // ROBOT_H_INCLUDED
