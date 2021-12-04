#include "monde.h"
#include <iostream>
using namespace std;
Monde::Monde(int lignes , int colonnes):nbL(lignes), nbC(colonnes)
{
mat.resize(nbL, vector<bool>(nbC));
for(int i=0; i<nbL; ++i)
    for(int j=0; j<nbC; ++j)
        mat[i][j] = false;//ctor
}

void Monde::afficherMatrice()
{


for(int i=0; i<nbL; ++i){
    for (int j= 0; j<nbC; ++j){
        if(mat[i][j]){
            cout << "o ";
        }else{
            cout << ". ";
        }
    }
    cout << "\n";
}
cout << "\n";

}

void Monde::metPapierGras(int i, int j){
    mat[i][j] = true;

}

void Monde::prendPapierGras(int i, int j){
    mat[i][j] = false;
}

int Monde::nbPapiersGras(){
int cpt = 0;
for(int i=0; i<nbL; ++i){
    for(int j = 0; j< nbC; ++j){
        if(mat[i][j]) cpt++;
    }
}
return cpt;
}

bool Monde::estSale(int i, int j){
    return mat[i][j];
}

int Monde::getnbC(){
    return nbC;
}

int Monde::getnbL(){
    return nbL;
}

//
//Monde::~Monde()
//{
//    //dtor
//}
