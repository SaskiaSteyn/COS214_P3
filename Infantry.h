#ifndef PRAC_3_INFANTRY_H
#define PRAC_3_INFANTRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

#include <iostream>
using namespace std;

class Infantry : public LegionUnit, public UnitComponent{
    private:
     int health;
     int damage;
     int defence;
     int amount;
     int ms;
    public:
        Infantry();
        virtual void move() = 0;
        virtual void attack() = 0;
        void reportingForDuty();

        const string type = "Infantry";
};


#endif //PRAC_3_INFANTRY_H
