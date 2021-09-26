#include <iostream>
using namespace std;

class Polynome{
private:
	int degre;
	float * coeffs;
	
public:
	Polynome(int pdegre);
	Polynome(int pdegre, float * pcoeffs);
	
	virtual ~Polynome();
	
	
};

Polynome::Polynome(int pdegre)
{
	degre=pdegre;
	
	coeffs = new float [degre+1];
	
	for(int i=0; i<degre+1; ++i){
		coeffs[i] = 0;
	}
	
}

Polynome::Polynome(int pdegre, float * pcoeffs)
{
	degre = pdegre;
	for(int i=0; i<degre +1; ++i)
	{
		coeffs[i] = pcoeffs[i];
	}
}

Polynome::~Polynome()
{
	delete [] coeffs;
}
int main()
{
	return 0;
}
