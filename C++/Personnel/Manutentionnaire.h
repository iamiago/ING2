#pragma once
#include "Employe.h"

class Manutentionnaire : public Employe {
	private :
		int nbHeure;
	public:
		Manutentionnaire(const std::string & n, const std::string & p, const std::string & d, int nb) : Employe(n,p,d), nbHeure {nb} {}
		double salaire() const override {return nbHeure*65;}
		std::string getInfo() const override { 
			return Employe::getInfo() + " " + std::to_string(nbHeure);
		}
			
};
