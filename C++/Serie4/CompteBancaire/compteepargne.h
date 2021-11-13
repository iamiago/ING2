#ifndef COMPTEEPARGNE_H_INCLUDED
#define COMPTEEPARGNE_H_INCLUDED

#include "comptebancaire.h"

class CompteEpargne : public CompteBancaire{

public:
    CompteEpargne();
    CompteEpargne(std::string p, int num);
    ~CompteEpargne();

protected:
    float m_tauxinteret;

public:
    void FixerTauxInteret(float t);
    virtual void Debiter(float a);
};



#endif // COMPTEEPARGNE_H_INCLUDED
