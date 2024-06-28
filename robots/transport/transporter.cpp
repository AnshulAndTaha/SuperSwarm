#include "transporter.h"

Transporter::Transporter(double x, double y) {
    setCoord(std::make_pair(x, y));
    setDesiredCord(getCurrentCord());
}