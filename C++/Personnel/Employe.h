#pragma once
#include <string>

class Employe {
	protected :
		std::string nom;
		std::string prenom;
		std::string date;
	public:
		Employe(const std::string & n, const std::string & p, const std::string & d) : nom {n}, prenom {p}, date {d} {}
		virtual double salaire() const = 0;
		virtual std::string getInfo() const {return nom + " " + prenom + " " + date;}
		const std::string & getDate() const {return date;}
};
