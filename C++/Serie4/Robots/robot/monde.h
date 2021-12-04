#ifndef MONDE
#define MONDE

#include <vector>
using namespace std;

class Monde{
	protected :
		int nbL;
		int nbC;
		vector<vector<bool> > mat;
	public :
		Monde(int lignes, int colonnes);
		int getNbL();
		int getNbC();
		void metPapierGras(int i, int j);
		void prendPapierGras(int i, int j);
		bool estSale(int i, int j);
		void afficher();
};

#endif



