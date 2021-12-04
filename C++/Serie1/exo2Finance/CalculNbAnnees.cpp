#include <iostream>
#include "calculNbAnnees.h"

using namespace std;

void calculateNbYears(int n){
      int nbYears=0; //number of years
	  double capital=1000;
	  while (capital<=n) {
	    capital=capital*1.045;
	    nbYears++;
	  }
      cout <<("%n--------------------------------------%n") << endl;
      cout << " number of years is "  << nbYears ;
}