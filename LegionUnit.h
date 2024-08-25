#ifndef PRAC_3_LEGIONUNIT_H
#define PRAC_3_LEGIONUNIT_H

#include "BattleStrategy.h"

#include <iostream>

using namespace std;

class LegionUnit {
    public:
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual void reportingForDuty() = 0;

        BattleStrategy * getStrategy();
        void setStrategy(BattleStrategy * battleStrategy);


    protected:
        BattleStrategy * strategy;
        string legionName;
};


#endif //PRAC_3_LEGIONUNIT_H
