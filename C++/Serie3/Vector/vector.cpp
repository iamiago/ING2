#include <iostream>
#include <cassert>
#include "vector.h"


Vector::Vector(unsigned int s)
{
    sz =s;
    pelem = new double[sz];
    for(unsigned int i=0; i<sz; ++i)
        pelem[i] =0;
}


Vector::Vector(unsigned int s, string nom):Vector(s)
{ // un des attributs est initialisé à la volée (C++)
    name = nom;
}

Vector::Vector(const Vector& a): pelem( new double[a.sz]), sz (a.sz)
{
    for(unsigned int i =0; i< sz; ++i)
        pelem[i]= a.pelem[i];
}
/* Surcharge de l'operateur d'affectation */
Vector& Vector::operator=(const Vector& a) //& : pas une copie, l'objet lui même
{
    assert(sz=a.sz);
    delete[] pelem;  // supprimer les anciens elements
    pelem = new double[sz];
    for(unsigned int i =0; i<sz; ++i)
        pelem[i] = a.pelem[i];

    return (*this);  // le vecteur qui appelle la fonction  (this est le pointeur et *this est l'objet pointé).
}

/* Surcharge de l'opérateur pour avoir un l'element a la posiito i */
//On done une position et ça nous retourne un double (l'element à la position donné en param)
double & Vector::operator[](unsigned int i) const
//le const à la fin veut dire qu'on ne modifie pas l'appelant
{
    assert(i>=0 && i<sz);
    return pelem[i];
}

Vector & Vector::operator()(unsigned int i, double val)
{
    assert(i>=0 && i<sz);
    pelem[i]=val;
    return (*this);
}

/*Surcharge de l'opérateur somme */
Vector Vector::operator+(const Vector& a) const
{
    Vector v(sz);
    for(unsigned int i=0; i<sz; ++i)
        v[i] = pelem[i]+a.pelem[i];

    return v;
}

/* Surcharge de l'opérateur multiplication */
Vector Vector::operator*(const Vector& a) const
{
    Vector v(sz);
    for(unsigned int i=0; i<sz; ++i)
        v[i] = pelem[i]*a.pelem[i];

    return v;
}

Vector::~Vector()
{
// une variable classique est automatique restitué en mémoire
//Lorsqu'on on affecte une adresse mémoire avec new, il faut la restituer avec delete
   // delete[] pelem;
}

void Vector::affiche()
{
   // cout << this << endl;
    cout << name << endl;
    for(unsigned int i=0; i<sz; ++i){
        if( i==0 ) cout << "[ ";
        cout << pelem[i];
        if (i!= sz-1) cout << " | ";
        if( i==sz-1) cout << " ]";
        }

    cout << "\n\n";
}

