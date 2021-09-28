#include <iostream>
#include "polynome.h"
using namespace std;

Polynome::Polynome()
{
    degre=0;
}

Polynome::Polynome(int deg)
{
    degre=deg;
    int a[deg+1];
    coeffs = a;
}
Polynome::Polynome(int deg, int a[])
{

    degre = deg;
    coeffs = a;
}
Polynome::Polynome(Polynome& autre)
{
    degre = autre.getDegre();
    coeffs = autre.getCoeffs();

}
Polynome::~Polynome()
{
 //delete coeffs;
}

int Polynome::getDegre()
{
return degre;
}

int* Polynome::getCoeffs()
{
return coeffs;
}

void Polynome::print()
{
 cout << "Polynome de degre: "<< degre << endl;
 for(int i=degre; i>=0; i-- )
 {
    if(i!=0){
        cout << coeffs[i]<<" * x^"<< i  ;
        cout << " + ";
    }else cout << coeffs[i];
 }
 cout << endl;
}
