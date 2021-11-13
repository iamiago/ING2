#include "Point2DC.h"
#include <iostream>

using namespace std;

Point2DC:: Point2DC() : Point2D()
{
    cout << " Je cree un point colore \n";
    couleur = 0;
}

Point2DC::Point2DC(int abs, int ord, short color):Point2D(abs,ord), couleur(color){}

void Point2DC::setColor(short color){
    couleur = color;
}

short Point2DC::getColor() {
    return couleur;
}

void Point2DC:: afficher()
{
cout << "Je suis un point colore \n";
Point2D::afficher();
cout << "ma couleur est : " << couleur << endl;
}

Point2DC:: ~Point2DC(){
    cout << " Destructeur point colore \n";
}

