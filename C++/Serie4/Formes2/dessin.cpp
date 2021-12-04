#include <iostream>
#incude "dessin.h"
using namespace std;



Dessin& Dessin::operator=(const Dessin& autre){
    if(this != &autre){
        libere();
        clear();
        copie_profonde(autre);
    }
    return *this;
}

void Dessin::ajouteFigure(const Figure& fig){
    push_back(fig.copie());
}

void Dessin:: affiche() const {
    cout < "Je contiens: " << endl;
    for(unsigned int i = 0; i<)
}
