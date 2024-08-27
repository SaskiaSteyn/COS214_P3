#include "TacticalCommand.h"

void TacticalCommand::setStrategy(BattleStrategy *s) {
    this->strategy = s;
}

void TacticalCommand::executeStrategy() {
    cout << this->strategy->engage() << endl;
}

void TacticalCommand::chooseBestStrategy() {
    cout << this->strategy->engage() << endl;
}
