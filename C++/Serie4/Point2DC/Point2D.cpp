#include "Point2D.h"
#include <iostream>
using namespace std;


Point2D::Point2D()
{
    cout << "Je cree un point";
    x=0;
    y=0;
}

Point2D::Point2D(int abs, int ord)
{
    x=abs;
    y=ord;
}

void Point2D::setX(int px){
    x=px;
}

void Point2D::setY(int py){
    y=py;
}

int Point2D::getX(){
    return x;
}

int Point2D::getY(){
    return y;
}

void Point2D::afficher(){
    cout << "Je suis un point \n";
    cout << "mes coordonees sont : "<< x << " , " << y << endl;
}

Point2D:: ~ Point2D(){
    cout << " Destruction du point";
}

