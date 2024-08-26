#ifndef PRAC_3_A_WOODLAND_H
#define PRAC_3_A_WOODLAND_H

#include "Artillery.h"

class A_Woodland : public Artillery{
    public:
        A_Woodland(int health, int damage, int defence, int amount, int ms);
        virtual void move();
        virtual void attack();
        LegionUnit * clone();

        virtual bool add(UnitComponent *component);
        virtual bool remove(UnitComponent *component);
};


#endif //PRAC_3_A_WOODLAND_H
