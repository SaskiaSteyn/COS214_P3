#ifndef PRAC_3_TACTICALCOMMAND_H
#define PRAC_3_TACTICALCOMMAND_H

#include <iostream>

#include "BattleStrategy.h"

using namespace std;

class TacticalCommand {
    private:
        BattleStrategy *strategy;
    public:
        void setStrategy(BattleStrategy *s);
        void executeStrategy(); // May need to change function type
        void chooseBestStrategy(); // Chooses best strategy according to Memento
};


#endif //PRAC_3_TACTICALCOMMAND_H
