#ifndef ROBOTBASE_H
#define ROBOTBASE_H

#include <utility>

class robotBase {
public:
    std::pair<double, double> getCurrentCord();

    void setCurrentCord(std::pair<double, double> cord);

    std::pair<double, double> getDesiredCord();

    void setDesiredCord(std::pair<double, double> cord);

    virtual void update();

    virtual void doTask();

private:
    std::pair<double, double> currentCord = std::make_pair(0.0, 0.0);
    std::pair<double, double> desiredCord = currentCord;
};



#endif