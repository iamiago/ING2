#include "pollueurtoutdroit.h"

PollueurToutDroit::PollueurToutDroit(int y,Monde &m):RobotPollueur(0,y,m), colDepart(y){}



void PollueurToutDroit::parcourir(){

    for(int i=0; i<monde.getnbL() ; ++i)
    {
        allerEn(i,colDepart);
        polluer();
    }
}
