#ifndef PRAC_3_INFANTRY_H
#define PRAC_3_INFANTRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

#include <vector>

#include <iostream>
using namespace std;

class Infantry : public LegionUnit, public UnitComponent{
    public:
        Infantry(int health, int damage, int defence, int amount, int ms);
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual LegionUnit * clone() = 0;
        void reportingForDuty();

        const string type = "Infantry";

        bool add(UnitComponent *component);
        bool remove(UnitComponent *component);

    protected:
        vector<UnitComponent*> unitComponent;
};


#endif //PRAC_3_INFANTRY_H
