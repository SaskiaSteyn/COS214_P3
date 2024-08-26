#ifndef PRAC_3_ARTILLERY_H
#define PRAC_3_ARTILLERY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

class Artillery : public LegionUnit{
    private:
        int health;
        int damage;
        int defence;
        int amount;
        int ms;
public:
    Artillery();
    virtual void move() = 0;
    virtual void attack() = 0;
    void reportingForDuty();

    const string type = "Artillery";
};


#endif //PRAC_3_ARTILLERY_H
