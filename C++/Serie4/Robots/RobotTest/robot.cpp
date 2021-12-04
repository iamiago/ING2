#include "robot.h"

Robot::Robot(int x, int y, Monde & m): posx(x), posy(y), monde(m){}

void Robot::allerEn(int i, int j){
    posx = i;
    posy = j;
}

//Robot::~Robot()
//{
//    //dtor
//}
