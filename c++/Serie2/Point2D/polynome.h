#ifndef POLYNOME_H_INCLUDED
#define POLYNOME_H_INCLUDED

class Polynome{

//Static = taille fixe

private:
    int degre;
    float * coeffs;

public:

    //Constructeur & destructeurs
    Polynome();
    Polynome(int deg);
    Polynome(int deg, float* a);
    Polynome(Polynome& autre);
    ~Polynome();

    //
    int getDegre();
    float* getCoeffs();
    Polynome deriver();

    float recupCoeff(int rang); // on recupere un coeff du polynome
    void affecterCoeff(int rang, float coeff); // on affecte un coefficient a la position rang
    float calculP(float x); // calcul du polynome pour un x
    Polynome & operator = (Polynome & autre);

    void print();


};



#endif // POLYNOME_H_INCLUDED
