#include <iostream>
#include "calculCapital.h"

using namespace std;

void calculateCapital(int n){
	  double capital=1000;
	  double rate=1.045;
	  //loop to repeate n times the calculus
	  for (int i=1; i<=n; i++)
	   capital=capital*rate;
      cout << "After " << n << " years, the capital is " << endl ;
      cout << capital << " Euro" << endl;
}
