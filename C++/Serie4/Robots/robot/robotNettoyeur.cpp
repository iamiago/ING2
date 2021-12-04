#include "robotNettoyeur.h"

RobotNettoyeur::RobotNettoyeur(Monde & mo) : Robot(0,0,mo) {}

void RobotNettoyeur::parcourir() {
	for (int i=0; i<m.getNbL(); i++) {
		for (int j=0; j<m.getNbC(); j++) {	
			m.prendPapierGras(i,j);
		}
	}
}