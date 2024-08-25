#include "LegionUnit.h"

BattleStrategy *LegionUnit::getStrategy() {
    return this->strategy;
}

void LegionUnit::setStrategy(BattleStrategy * battleStrategy) {
    this->strategy = battleStrategy;
}
