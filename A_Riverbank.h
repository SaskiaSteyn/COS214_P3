#ifndef PRAC_3_A_RIVERBANK_H
#define PRAC_3_A_RIVERBANK_H

#include "Artillery.h"

class A_Riverbank : public Artillery {
    public:
        A_Riverbank(int health, int damage, int defence, int amount, int ms);
        virtual void move();
        virtual void attack();
        LegionUnit * clone();

        virtual bool add(UnitComponent *component);
        virtual bool remove(UnitComponent *component);
};


#endif //PRAC_3_A_RIVERBANK_H
