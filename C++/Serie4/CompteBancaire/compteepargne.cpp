#include "compteepargne.h"


CompteEpargne::CompteEpargne():CompteBancaire() {}

CompteEpargne::CompteEpargne(std::string p, int num) :CompteBancaire(p,num) {}

CompteEpargne::~CompteEpargne(){}

void CompteEpargne::FixerTauxInteret(float t) { m_tauxinteret=t;}

void CompteEpargne::Debiter(float a){ if(a<m_solde) m_solde -=a; }
