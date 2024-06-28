#include "miner.h"

Miner::Miner(double x, double y) {
    setCoord(std::make_pair(x, y));
    setDesiredCord(getCurrentCord());
}

void Miner::mine() {
    cargo = canMine();
}

bool Miner::hasCargo() const {
    return cargo;
}

bool Miner::canMine() {
    return true;
}

void Miner::unLoad() {
    if(hasCargo()) {
        cargo = false;
    }
}
