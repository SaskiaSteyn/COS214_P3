#include "TacticalCommand.h"

void TacticalCommand::setStrategy(BattleStrategy *s) {
    this->strategy = s;
}

void TacticalCommand::executeStrategy() {
    this->strategy->engage();
}

void TacticalCommand::chooseBestStrategy() {
    this->strategy->engage();
}
