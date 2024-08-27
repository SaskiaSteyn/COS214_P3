#include "BattleStrategy.h"

int BattleStrategy::getVictories() {
    return this->victories;
}

void BattleStrategy::winBattle() {
    this->victories++;
}
