#include "comptebancaire.h"
#include <iostream>
#include <string>

using namespace std;


CompteBancaire::CompteBancaire(): m_numero{0}, m_solde{0}, m_proprietaire{string("personne")}{}

CompteBancaire::CompteBancaire(std::string p, int num): m_numero{num}, m_solde{0}, m_proprietaire{p}{}

CompteBancaire::~CompteBancaire(){}

int CompteBancaire::Solde() { return m_solde;}

void CompteBancaire::Debiter(float a) {m_solde -= a;}
void CompteBancaire::Crediter(float a) {m_solde += a;}

std::string CompteBancaire::Proprietaire(){return m_proprietaire;}
