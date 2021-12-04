#ifndef ROBOTNETTOYEUR
#define ROBOTNETTOYEUR

#include "robot.h"

class RobotNettoyeur : public Robot {
	public :
		RobotNettoyeur(Monde & mo);
		void parcourir();
};

#endif
