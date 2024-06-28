#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include "../robotBase.h"
#include "../miner/miner.h"

class Transporter : RobotBase {
public:
    Transporter(double x, double y);
    bool hasCargo();
    bool loadUp(Miner& robot);
    bool dropOff();
private:
    bool cargo = false;
};

#endif //TRANSPORTER_H
