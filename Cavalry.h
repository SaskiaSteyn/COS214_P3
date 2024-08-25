#ifndef PRAC_3_CAVALRY_H
#define PRAC_3_CAVALRY_H

#include "LegionUnit.h"
#include "UnitComponent.h"

class Cavalry : public LegionUnit {
    public:
        virtual void move() = 0;
        virtual void attack() = 0;
        void reportingForDuty();

        const string type = "Cavalry";
};


#endif //PRAC_3_CAVALRY_H
