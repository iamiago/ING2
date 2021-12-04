#include "Personnel.h"
#include <iostream>

int main (int argc, char** argv) {
	Personnel p;
	if (p.charger("dtpersonnel.txt")) {
		p.calculer();
	}
   	return 0;

}
