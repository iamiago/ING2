#include <iostream>
#include "monde.h"
using namespace std;

Monde::Monde(int lignes, int colonnes) : nbL(lignes) , nbC (colonnes) {
	//Row colonne(nbC);
	//mat(nbL,colonne);
	mat.resize(nbL,vector<bool>(nbC));
	for (int i=0; i < nbL; i++) {
		for (int j=0; j<nbC; j++) {
			mat[i][j]=false;
		}
	}
}

int Monde::getNbL() {
	return nbL;
}

int Monde::getNbC() {
	return nbC;
}

void Monde::metPapierGras(int i, int j) {
	mat[i][j] = true;
}

void Monde::prendPapierGras(int i, int j) {
	mat[i][j] = false;
}

bool Monde::estSale(int i, int j) {
	return mat[i][j];
}

void Monde::afficher() {
	for (int i=0; i<nbL; i++) {
		for (int j=0; j<nbC; j++) {
			if (estSale(i,j)) cout << " o ";
			else cout << " . ";
		}
		cout << endl;
	}
}
