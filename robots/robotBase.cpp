#include "robotBase.h"
#include <cmath>

std::pair<double, double> RobotBase::getCurrentCord() {
    return currentCord;
}

void RobotBase::setCoord(const std::pair<double, double>& coord) {
    currentCord = coord;
}

std::pair<double, double> RobotBase::getDesiredCord() {
    return desiredCord;
}

void RobotBase::setDesiredCord(const std::pair<double, double>& coord) {
    desiredCord = coord;
}

double RobotBase::getDist(RobotBase& robot) {
    const double targetX = robot.getCurrentCord().first;
    const double targetY = robot.getCurrentCord().second;

    const double curX = getCurrentCord().first;
    const double curY = getCurrentCord().second;

    const double a2 = std::pow(targetX - curX, 2);
    const double b2 = std::pow(targetY - curY, 2);

    return std::sqrt(a2 + b2);
}

double RobotBase::getAngle(RobotBase& robot) {
    const double targetX = robot.getCurrentCord().first;
    const double targetY = robot.getCurrentCord().second;

    const double curX = getCurrentCord().first;
    const double curY = getCurrentCord().second;

    const double xDelta = targetX - curX;
    const double yDelta = targetY - curY;

    return atan2(yDelta, xDelta);
}