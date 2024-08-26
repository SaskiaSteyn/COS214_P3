#ifndef PRAC_3_CAVALRY_H
#define PRAC_3_CAVALRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"
#include <vector>

class Cavalry : public LegionUnit, public UnitComponent {
    public:
        Cavalry(int health, int damage, int defence, int amount, int ms, string unitName);
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual Cavalry * clone() = 0;
        void reportingForDuty();

        const string type = "Cavalry";

        bool add(UnitComponent *component);
        bool remove(UnitComponent *component);

    protected:
        vector<UnitComponent*> unitComponent;
};


#endif //PRAC_3_CAVALRY_H
