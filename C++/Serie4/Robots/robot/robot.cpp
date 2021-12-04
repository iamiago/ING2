#include <iostream>
#include "robot.h"
using namespace std;

Robot::Robot(int x, int y, Monde & mo) : posx(x) , posy(y) , m(mo) {}

void Robot::allerEn(int i, int j) {
	posx = i;
	posy = j;
}
