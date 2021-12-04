#ifndef DESSIN_H_INCLUDED
#define DESSIN_H_INCLUDED

#include "figure.h"
#include <vector>
#include <iostream>

using namespace std;

class Dessin: private vector<Figure*>{
public:
    Dessin(): vector<Figure*>();

    //Constructeur de copie en faisant une copie profonde
    Dessing(const Dessin & autre) : vector<Figure * >()
    {
    copie_profonde(autre);
    }

    ~Dessin(){
    cout << "Destruction du dessin";
    libere();
    }
    //opérateur d'affectation
    Dessin& operator=(const Dessin& autre);

    void ajouteFigure(const Figure & fig);

    void affiche() const;

private:

//void copie_profonde();
//void libere();





};
#endif // DESSIN_H_INCLUDED
