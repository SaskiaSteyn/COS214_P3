#ifndef PRAC_3_ARTILLERY_H
#define PRAC_3_ARTILLERY_H

#include "LegionUnit.h"
#include "UnitComponent.h"
#include <vector>

class Artillery : public LegionUnit, public UnitComponent{
public:
    Artillery(int health, int damage, int defence, int amount, int ms, string unitName);
    virtual void move() = 0;
    virtual void attack() = 0;
    virtual Artillery * clone() = 0;
    void reportingForDuty();

    const string type = "Artillery";

    bool add(UnitComponent *component);
    bool remove(UnitComponent *component);

    protected:
        vector<UnitComponent*> unitComponent;
};


#endif //PRAC_3_ARTILLERY_H
