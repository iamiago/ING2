#include <iostream>
#include "calculNbAnnees.h"

using namespace std;

/****************  exo 2 ***************/

int main()
{
      cout << "Hello world!" << endl;

	//cast the argument in integer
    int n;
    cout << "entre le minimum du caital attendu  : ";
    cin >> n;

      calculateNbYears(n);
      return 0;
}
