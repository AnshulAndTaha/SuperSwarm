#include "robotBase.h"

std::pair<double, double> robotBase::getCurrentCord() {
    return currentCord;
}

void robotBase::setCurrentCord(std::pair<double, double> cord) {
    currentCord = cord;
}

std::pair<double, double> robotBase::getDesiredCord() {
    return desiredCord;
}

void robotBase::setDesiredCord(std::pair<double, double> cord) {
    desiredCord = cord;
}

void robotBase::update() {}

void robotBase::doTask() {}