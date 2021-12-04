#pragma once
#include "Employe.h"

class Commercial : public Employe {
	protected :
		double chiffreAffaire;
	public :
		Commercial(const std::string & n, const std::string & p, const std::string & d, double ca) : Employe(n,p,d), chiffreAffaire {ca} {}
};
