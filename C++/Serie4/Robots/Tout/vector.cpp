#include "vector.h"


Vector::Vector(unsigned int s):Size(s), Elements(new double[s]){}

Vector::Vector(const Vector&v):Size(v.Size), Elements(new double[v.Size])
{
    for(unsigned int i=0; i<Size; ++i) Elements[i]=v.Elements[i];
}

Vector& Vector::operator = (const Vector &v){
    Size=v.Size;
    delete[] Elements;
    Elements = new double[Size];

    //copie terme à terme
    for(unsigned int i =0; i<Size; ++i){
        Elements[i]=v.Elements[i];

    }
}

 Vector::~Vector(){delete[] Elements;}

//Getteurs ou accesseurs
double * Vector::getElements(){
    return Elements;
}
//Autres méthodes

ostream& operator << (ostream & out, const Vector& v){
    out << "Vector de taile :" << v.Size;
    out << "\nCoeffs: ";
    for(int i=0; i<v.Size; ++i){
        out << v.Elements[i] << " ";
    }
    out << endl;
    return out;
}
