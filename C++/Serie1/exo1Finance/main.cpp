#include <iostream>
#include "calculCapital.h"

using namespace std;


int main() {

    cout << "Hello world!" << endl;

	//cast the argument in integer
    int n;
    cout << "entre sur combien d'annees : ";
    cin >> n;
    calculateCapital(n);
    return 0;
}