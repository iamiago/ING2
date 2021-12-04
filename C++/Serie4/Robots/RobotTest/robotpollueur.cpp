#include "robotpollueur.h"

RobotPollueur::RobotPollueur(int x, int y, Monde &m): Robot(x,y,m){}

void RobotPollueur::polluer(){
    monde.metPapierGras(posx,posy);
}
