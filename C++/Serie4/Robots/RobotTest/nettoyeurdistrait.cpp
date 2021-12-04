#include "nettoyeurdistrait.h"
#include <iostream>
using namespace std;
NettoyeurDistrait::NettoyeurDistrait(int x, int y, Monde &m):Robot(x,y,m){}

void NettoyeurDistrait::nettoyer(){
    monde.prendPapierGras(posx,posy);
}

void NettoyeurDistrait::parcourir(){

int cpt =0;
    for(int i=0; i<monde.getnbL(); ++i){
        for(int j=0; j<monde.getnbC(); ++j){
            allerEn(j,i);
            if(monde.estSale(j,i) ){
                cpt++;
                if(cpt%2==1) {nettoyer();}


            }

        }
    }
}
