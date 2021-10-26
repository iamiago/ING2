//***********
//COMPLEXE.H
//***********
#include <iostream>
#include <string>
#include "complexe.h"
using namespace std;


Complexe::Complexe() : re(0), im(0) {}

Complexe::Complexe(double _re, double _im) : re(_re), im(_im) {}

Complexe::Complexe(Complexe & c ) : re(c.getRe()), im(c.getIm()) {}

Complexe::~Complexe() {}

double Complexe::getRe() const // l'appelant ne sera pas modifier
//z1.estEgal(z2) // l'appelant est z1 et l'appelé est z2
{
    return re;
}

double Complexe::getIm() const
{
    return im;
}

void Complexe::setRe(double _re)
{
    re = _re;
}

void Complexe::setIm(double _im)
{
    im=_im;
}


Complexe Complexe::operator+(const Complexe & c) const
{
    double resRE = re + c.getRe();
    double resIM = im + c.getIm();

    Complexe resultat(resRE,resIM);

    return resultat;
}

Complexe Complexe::operator-(const Complexe & c) const
{
    double resRE = re - c.getRe();
    double resIM = im - c.getIm();

    Complexe resultat(resRE,resIM);

    return resultat;
}



void Complexe::operator=(const Complexe & c)
{
    re = c.getRe();
    im = c.getIm();
    //return *this; // this est un pointeur pour l'objet lui même *this est le contenu du pointeur, donc le contenu de l'objet
}
/*
 ou bien

 Complexe & complexe

*/

void Complexe::afficher()
{
    cout << re << " +i* " << im << endl;
}

ostream& operator<<(ostream& out, const Complexe& c)
{
    out << '(' << c.getRe() << " , " << c.getIm() << ')';
}


