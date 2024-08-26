#ifndef PRAC_3_TACTICALMEMENTO_H
#define PRAC_3_TACTICALMEMENTO_H

#include <iostream>

#include "BattleStrategy.h"

using namespace std;

class TacticalMemento {
    private:
        BattleStrategy *strategy;
    public:
        void storeStrategy(BattleStrategy *strategy);
        BattleStrategy* getStrategy();
};


#endif //PRAC_3_TACTICALMEMENTO_H
