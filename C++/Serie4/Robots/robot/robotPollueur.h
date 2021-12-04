#ifndef ROBOTPOLLUEUR
#define ROBOTPOLLUEUR

#include "robot.h"

class RobotPollueur : public Robot {
	public :
		RobotPollueur(int x, int y, Monde & mo);
		void polluer();
};

#endif
