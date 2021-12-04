#include "nettoyeurDistrait.h"

NettoyeurDistrait::NettoyeurDistrait(Monde & mo) : RobotNettoyeur(mo) {}

void NettoyeurDistrait::parcourir() {
	bool compte=true;
	for (int i=0; i<m.getNbL(); i++) {
		for (int j=0; j<m.getNbC(); j++) {	
			if (m.estSale(i,j) && compte) {
				m.prendPapierGras(i,j);
				compte=false;
			}
			else if (m.estSale(i,j)) compte=true;
		}
	}
}