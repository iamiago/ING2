#include "polynome.h"

Polynome::Polynome(int pdegre){

    degre=pdegre;
    coeffs = new float [degre +1];

    for(int i=0; i<degre+1; ++i){
        coeffs[i]=0;
    }
}
Polynome::Polynome(int pdegre, float * pcoeffs){
    degre = pdegre;
    for(int i=0; i<degre +1; ++i)
    {
        coeffs[i] = pcoeffs[i];
    }
}
Polynome::~Polynome()
{
    delete [] coeffs;
}

void Polynome::afficher(){
    cout << "Degre du polynome: " << degre << endl;
    cout << "Coeffs du polynome: ";
    for(int i=0; i<degre+1; ++i){
        cout << " "<< coeffs[i] ;
        if (i!=degre )cout <<" ,";
    } cout << endl;
}
