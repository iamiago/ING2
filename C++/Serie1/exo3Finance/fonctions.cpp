/****************  exo 3 ***************/
/*
 * Created on october 2020
 *
 */

#include <iostream>
#include "fonctions.h"

using namespace std;

  /** display on the screen the table of values of abscissa and ordonnate
    * @param abscs the table of abscica
    * @param ords the table of ordinate
    * @return void.
    **/
   void Finance :: calculateCapital(int n){
	  double capital=1000;
	  double rate=1.045;
	  //loop to repeate n times the calculus
	  for (int i=1; i<=n; i++)
	   capital=capital*rate;
      cout << "After " << n << " years, the capital is " << endl ;
      cout << capital << " Euro" << endl;
}

   /** compute the average .
    *
    * @param abscs the table of abcissa
    * @return a double that is the value of the average.
    **/
   void Finance :: calculateNbYears(int n){
      int nbYears=0; //number of years
	  double capital=1000;
	  while (capital<=n) {
	    capital=capital*1.045;
	    nbYears++;
	  }
      cout <<("%n--------------------------------------%n") << endl;
      cout << " number of years is "  << nbYears ;
}

