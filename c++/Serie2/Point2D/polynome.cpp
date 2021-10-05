#include <iostream>
#include "polynome.h"
using namespace std;

Polynome::Polynome()
{
    degre=0;
    coeffs = NULL;
}

Polynome::Polynome(int deg)
{
    degre=deg;
    coeffs = new float(deg+1);

    for(int i=0; i<degre; ++i){
      coeffs[i] =0.0;
    }
    coeffs[degre] = 1.0;
    //int a[deg+1];
    //coeffs = a;
}

Polynome::Polynome(int deg, float a[])
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
 //delete coeffs;
}

int Polynome::getDegre()
{
    return degre;
}

float Polynome::recupCoeff(int rang){
    return coeffs[rang];
}

float* Polynome::getCoeffs()
{
    return coeffs;
}
void Polynome::affecterCoeff(int rang, float coeff){
    coeffs[rang] = coeff;
}
/*
 P(x) = x³+x²+x+1
      = 1 + x*(1+x+x²)
      = 1 + x*(1 + x(1 + x))
*/
float Polynome::calculP(float x)
{
    float rep = coeffs[0];
    for(int i = degre; i>0; i--){
        rep = rep *x + coeffs[i];
    }

}

Polynome Polynome::deriver()
{

}

void Polynome::print()
{
 cout << "Polynome de degre: "<< degre << endl;
 cout << "P(x) = ";
 for(int i=degre; i>=0; i-- )
 {
    if(i!=0){
        cout << coeffs[i]<<" * x^"<< i  ;
        cout << " + ";
    }else cout << coeffs[i];
 }
 cout << endl;
}
