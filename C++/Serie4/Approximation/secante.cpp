#include <iostream>
#include <cstdlib>
#include <cmath>
#include "secante.h"

using namespace std;

//Definition des methodes

double Secante::f(double &x)
{
    return (x-1.0)*(x-1.5)*(x-2.0);
}

double Secante::itere(double & s, double & t)
{
    double r;
    cout << " la born inf : " << s << " : ";
    cout << "   f(s) =  " << f(s) << endl;

    cout << " la bone sup : " << t << " : ";
    cout << "   f(t) =  "<< f(t) << endl;

    r= t-f(t)*(s-t)/(f(s) - f(t));

    cout << " nouvelle : " << r << " : ";
    cout << "   f(r) = " << f(r) << endl;

    //if f(r) == 0.0 return r;

    if(f(s)*f(r) <= 0.0)
        t=r;
    else s=r;

    return r;
}

void Secante::racine()
{
    double r, r1, erreur;
    double s,t;
    cout << "la borne inferieur ? ";
    cin >> s;

    cout << "la born superieure ? ";
    cin >> t;

    r1 = s;

    do{
        r=itere(s,t);
        erreur = abs(r-r1);
        r1 = r;
        system("PAUSE");
    }while(erreur > precision);

    cout << "Solution r : " << r << endl;
    cout << "   f(r) =  "<< f(r) << endl;

}
