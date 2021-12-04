#include "robotPollueur.h"

RobotPollueur::RobotPollueur(int x, int y, Monde & mo) : Robot(x,y,mo) {}

void RobotPollueur::polluer() {
	m.metPapierGras(posx,posy);
}
