#ifndef PRAC_3_TACTICALPLANNER_H
#define PRAC_3_TACTICALPLANNER_H

#include <iostream>

#include "BattleStrategy.h"
#include "TacticalMemento.h"

using namespace std;

class TacticalPlanner {
    private:
        BattleStrategy *currentStrategy;
    public:
        TacticalMemento* createMemento();
        void restoreMemento(TacticalMemento *memento);
};


#endif //PRAC_3_TACTICALPLANNER_H
