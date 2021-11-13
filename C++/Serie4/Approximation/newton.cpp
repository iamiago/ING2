
#include <iostream>
#include <cmath>
#include "newton.h"

using namespace std;

//Definition des méthodes
double Newton::f(double x) { return (x-1.0)*(x-1.5)*(x-2.0);}
double Newton::df(double x) { return (f(x+precision)-f(x))/precision; }
double Newton::itere(double x) { return (x-f(x)) / df(x);}

void Newton::racine()
{
    double x2;
    double x;
    double erreur;
    cout << "le Point de depart ? : ";
    cin >> x;

    do{

        x2=x;
        cout << "au point " << x2 << " : " << endl;
        cout << "   f(x) =  "<< f(x2) << endl;
        cout << "   f'(x)=  "<<df(x2) << endl;

        x= itere(x2);
        erreur = abs(x-x2);

        cout << "   Nouveau point = " << x << endl;

    }while (erreur > precision);

    cout << "Solution : " << x << endl;
}
