#ifndef PRAC_3_BATTLESTRATEGY_H
#define PRAC_3_BATTLESTRATEGY_H

#include <iostream>

using namespace std;

class BattleStrategy {
    public:
        virtual string getType() = 0;
        virtual void engage() = 0;
};


#endif //PRAC_3_BATTLESTRATEGY_H
