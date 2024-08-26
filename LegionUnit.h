#ifndef PRAC_3_LEGIONUNIT_H
#define PRAC_3_LEGIONUNIT_H

#include "BattleStrategy.h"

#include <iostream>

using namespace std;

class LegionUnit {
    private:
        int health;
        int damage;
        int defence;
        int amount;
        int ms;
    public:
        LegionUnit(int health, int damage, int defence, int amount, int ms, string unitName);
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual void reportingForDuty() = 0;

        BattleStrategy * getStrategy();
        void setStrategy(BattleStrategy * battleStrategy);

        int getHealth();
        int getDamage();
        int getDefence();
        int getAmount();
        int getMS();

        void setLegionName(string name);
        string getLegionName();


    protected:
        BattleStrategy * strategy;
        string legionName;
};


#endif //PRAC_3_LEGIONUNIT_H
