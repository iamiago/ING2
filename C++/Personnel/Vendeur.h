#pragma once
#include "Commercial.h"

class Vendeur : public Commercial {
	public:
		Vendeur(const std::string & n, const std::string & p, const std::string & d, double ca) : Commercial(n,p,d,ca){}
		double salaire() const override {return chiffreAffaire/5 + 400;}
		std::string getInfo() const { return Employe::getInfo() + " " + std::to_string(chiffreAffaire);}
};
