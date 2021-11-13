#ifndef COMPTEBANCAIRE_H_INCLUDED
#define COMPTEBANCAIRE_H_INCLUDED
#include <iostream>
using namespace std;

class CompteBancaire
{
public:
    CompteBancaire();
    CompteBancaire(std::string p, int num);
    ~CompteBancaire();

protected:
    int m_numero;
    int m_solde;
    std::string m_proprietaire;

public:
    void Crediter(float a);

    void Fermer();
    int Numero();
    int Solde();
    std::string Proprietaire();

    virtual void Debiter(float a);

};



#endif // COMPTEBANCAIRE_H_INCLUDED
