#ifndef POLYNOME_H_INCLUDED
#define POLYNOME_H_INCLUDED

class Polynome{

private:
    int degre;
    int* coeffs;

public:

    //Coonstructeur & destructeurs
    Polynome();
    Polynome(int deg);
    Polynome(int deg, int* a);
    Polynome(Polynome& autre);
    ~Polynome();

    //
    int getDegre();
    int* getCoeffs();
    Polynome derive();

    void print();


};



#endif // POLYNOME_H_INCLUDED
