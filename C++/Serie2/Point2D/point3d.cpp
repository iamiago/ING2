#include <iostream>
#include "point3d.h"

//using namespace std;
Point3D::Point3D()
{
    x=0;
    y=0;
    z=0;
}

Point3D::Point3D(int a, int b){
 x =a;
 y=b;
 z=0;
}

Point3D::Point3D(int a, int b, int c){

    x=a;
    y=b;
    z=c;
}

Point3D::Point3D(Point3D& autre)
{
    x=autre.getx();
    y=autre.gety();
    z=autre.getz();
}

Point3D::~Point3D()
{

}

void Point3D::setx(int a)
{
    x=a;
}

void Point3D::sety(int b)
{
    y=b;
}

void Point3D::setz(int c)
{
    z=c;
}

int Point3D::getx()
{
return x;
}
int Point3D::gety()
{
return y;
}
int Point3D::getz()
{
return z;
}


void Point3D::print() const
{
 std::cout << "Coordonées du point\n";
 std::cout << "x: " << x << " y: "<< y << " z: "<< z << std::endl;
}

bool Point3D::compare(Point3D& autre)
{
    return (autre.getx() == x && autre.gety() == y && autre.getz() == z);
}
