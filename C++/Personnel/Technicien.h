#pragma once
#include "Employe.h"

class Technicien : public Employe {
	private :
		int nbUnite;
	public:
		Technicien(const std::string & n, const std::string & p, const std::string & d, int nb) : Employe(n,p,d), nbUnite {nb} {}
		double salaire() const override {return nbUnite*5;}
		std::string getInfo() const { return Employe::getInfo() + " " + std::to_string(nbUnite);}
};
