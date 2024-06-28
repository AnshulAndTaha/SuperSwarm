#include "beacon.h"
#include <cmath>

Beacon::Beacon(double x, double y) {
    setCoord(std::make_pair(x, y));
    setDesiredCord(getCurrentCord());
}

