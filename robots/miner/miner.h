#ifndef MINER_H
#define MINER_H
#include "../robotBase.h"

class Miner : RobotBase {
public:
    Miner(double x, double y);
    void mine();
    void unLoad();
    [[nodiscard]] bool hasCargo() const;
private:
    static bool canMine();
    bool cargo = false;
};

#endif //MINER_H
