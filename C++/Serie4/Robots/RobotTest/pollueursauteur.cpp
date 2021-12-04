#include "pollueursauteur.h"

PollueurSauteur::PollueurSauteur(int pas,int y, Monde &m):RobotPollueur(0,y,m), colDepart(y), deltax(pas){}

void PollueurSauteur::parcourir(){
    for(int i=0; i<monde.getnbL(); ++i){
        if(i%2==0){
            int c =(colDepart + deltax) % monde.getnbC();
            allerEn(i,c);
            polluer();
        }else{

            allerEn(i,colDepart);
            polluer();
        }
    }
}
