#ifndef POLYNOME_H
#define POLYNOME_H

#include <iostream>
using namespace std;

class Polynome
{
    public:

        Polynome(int pdegre);
        Polynome(int pdegre, float * pcoeffs);
        virtual ~Polynome();
        void afficher();
        /**
        Polynome(int pdegre){
            degre=pdegre;

            coeffs = new float [degre+1];

            for(int i=0; i<degre+1; ++i){
                coeffs[i] = 0;
            }

        }
        Polynome(int pdegre, float * pcoeffs){
            degre = pdegre;
            for(int i=0; i<degre +1; ++i)
            {
                coeffs[i] = pcoeffs[i];
            }
        }
        virtual ~Polynome(){
            delete [] coeffs;
        }

        void afficher(){
            cout << "Degre du polynome: " << degre << endl;
            cout << "Coeffs du polynome: ";
            for(int i=0; i<degre+1; ++i){
                cout << " "<< coeffs[i] << " ,";
            } cout << endl;
        }
            */
    protected:
        //
    private:
        int degre;
        float * coeffs;
};



#endif // POLYNOME_H
