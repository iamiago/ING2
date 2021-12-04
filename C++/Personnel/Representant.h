#pragma once
#include "Commercial.h"

class Representant : public Commercial {
	public:
		Representant(const std::string & n, const std::string & p, const std::string & d, double ca) : Commercial(n,p,d,ca){}
		double salaire() const override {return chiffreAffaire/5 + 800;}
		std::string getInfo() const { return Employe::getInfo() + " " + std::to_string(chiffreAffaire);}

};

