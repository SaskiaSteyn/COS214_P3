#ifndef PRAC_3_ARTILLERY_H
#define PRAC_3_ARTILLERY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

class Artillery : public LegionUnit{
public:
    Artillery(int health, int damage, int defence, int amount, int ms);
    virtual void move() = 0;
    virtual void attack() = 0;
    virtual LegionUnit * clone() = 0;
    void reportingForDuty();

    const string type = "Artillery";
};


#endif //PRAC_3_ARTILLERY_H
