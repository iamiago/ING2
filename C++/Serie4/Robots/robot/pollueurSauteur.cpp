#include "pollueurSauteur.h"

PollueurSauteur::PollueurSauteur(int y, Monde & mo, int d) : RobotPollueur(0,y,mo) , delta(d) {}

void PollueurSauteur::parcourir() {
	int col=posy;
	for (int i=0;i<m.getNbL();i++) {
		if (i%2 == 0) posy = col;
		else posy = col + delta;
		posy = posy % m.getNbC();
		allerEn(i,posy);
		polluer();
	}
	
}