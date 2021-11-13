#include <iostream>
#include "compteepargne.h"
using namespace std;

int main()
{
    cout << "Bienvenue dans le programme compte bancaire" << endl;

    CompteEpargne ce(string("CompteEpargne 1"), 1);
    ce.FixerTauxInteret(2.25);
    ce.Crediter(1000);
    std::cout <<"Compte : " << ce.Proprietaire()<<" | Solde: "<<ce.Solde() <<" €"<< std::endl;

    CompteBancaire cb(string("CompteBancaire 1"),1);
    cb.Debiter(1200);
    std::cout <<"Compte : " << cb.Proprietaire()<<" | Solde: "<<cb.Solde() <<" €" <<std::endl;
    CompteEpargne cee(string("CompteEpargne 2"), 2);
    cee.Debiter(500);

    std::cout <<"Compte : " << cee.Proprietaire()<<" | Solde: "<<cee.Solde() << " €"<<std::endl;

    return 0;
}
