#ifndef ROBOT_H
#define ROBOT_H

#include "monde.h"
class Robot
{
    protected:
        int posx;
        int posy;
        Monde & monde;

    public:
        Robot(int x, int y, Monde & m);
        void allerEn(int i, int j);
        virtual void parcourir() = 0;

    private:
};

#endif // ROBOT_H
