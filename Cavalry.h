#ifndef PRAC_3_CAVALRY_H
#define PRAC_3_CAVALRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

class Cavalry : public LegionUnit, public UnitComponent {
    public:
        Cavalry(int health, int damage, int defence, int amount, int ms);
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual LegionUnit * clone() = 0;
        void reportingForDuty();

        const string type = "Cavalry";
};


#endif //PRAC_3_CAVALRY_H
