#ifndef ROBOTBASE_H
#define ROBOTBASE_H

#include <utility>

#include "../utility/node.h"

class RobotBase : Node {
public:
    RobotBase();
    std::pair<double, double> getCurrentCord();

    virtual ~RobotBase() = default;

    void setCoord(const std::pair<double, double>& coord);

    std::pair<double, double> getDesiredCord();

    void setDesiredCord(const std::pair<double, double>& cord);

    double getDist(RobotBase& robot);

    double getAngle(RobotBase& robot);
private:
    Node* objNode;
    std::pair<double, double> desiredCord = std::make_pair(0,0);
};



#endif