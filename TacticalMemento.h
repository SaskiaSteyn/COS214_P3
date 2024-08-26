#ifndef PRAC_3_TACTICALMEMENTO_H
#define PRAC_3_TACTICALMEMENTO_H

#include <iostream>

#include "BattleStrategy.h"

using namespace std;

class TacticalMemento {
    public:
        void storeStrategy(BattleStrategy *strategy);
};


#endif //PRAC_3_TACTICALMEMENTO_H
