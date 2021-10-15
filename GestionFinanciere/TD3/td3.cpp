#include <iostream>
#include <math.h>
using namespace std;


int main ()

{
	int a[1'000'000];
	a[0] =1'000'000 - 200'000;
	
	 int val =  1'000'000;
	 int cpt = 0;
	 while(a[cpt] > 0)
	 {
		 
		 a[cpt+1] = val * pow(0.94,cpt) - 200'000;
		 cpt++;
		 //cout << a[cpt] << " " ;
		 
	 }
	 
	 cout << cpt << endl;
	
return 0;	
}
