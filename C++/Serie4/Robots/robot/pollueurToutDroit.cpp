#include <iostream>
#include "pollueurToutDroit.h"
using namespace std;

PollueurToutDroit::PollueurToutDroit(int y, Monde & mo) : RobotPollueur(0,y,mo) , colDepart(y) {}

void PollueurToutDroit::parcourir() {
	for(int i=0;i<m.getNbL();i++) {
		allerEn(i,colDepart);
		polluer();
	}
}
