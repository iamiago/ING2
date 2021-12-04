#include "robotnettoyeur.h"

RobotNettoyeur::RobotNettoyeur(int x, int y, Monde &m): Robot(x,y,m){}

void RobotNettoyeur::parcourir(){
for(int col = 0; col < monde.getnbC(); ++col){
    for(int lig = 0; lig < monde.getnbL(); ++lig){
        allerEn(lig,col);
        nettoyer();
    }
}
}

void RobotNettoyeur::nettoyer(){
    monde.prendPapierGras(posx,posy);
}
