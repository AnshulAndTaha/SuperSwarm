#ifndef DRONE_H
#define DRONE_H

#include "../robotBase.h"
#include <utility>
#include <vector>

class drone: robotBase {
public:
    void update() override;

    void doTask() override;

    void setDesiredCord(std::pair<double, double> cord) {
        robotBase::setDesiredCord(cord);
        trajectory = generateTrajectory(cord);
    }

private:
    double timeS = 0;

    std::vector<std::pair<double, double>> trajectory = {};

    std::vector<std::pair<double, double>> generateTrajectory(std::pair<double, double> cord);
};

#endif //DRONE_H