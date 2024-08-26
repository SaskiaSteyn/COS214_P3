#include "TacticalPlanner.h"

TacticalMemento *TacticalPlanner::createMemento() {
    TacticalMemento *currentStrategy;
    currentStrategy->storeStrategy(this->currentStrategy);

    return currentStrategy;
}

void TacticalPlanner::restoreMemento(TacticalMemento *memento) {
    this->currentStrategy = memento->getStrategy();
}
