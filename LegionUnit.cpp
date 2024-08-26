#include "LegionUnit.h"

LegionUnit::LegionUnit() {

}

BattleStrategy *LegionUnit::getStrategy() {
    return this->strategy;
}

void LegionUnit::setStrategy(BattleStrategy * battleStrategy) {
    this->strategy = battleStrategy;
}
