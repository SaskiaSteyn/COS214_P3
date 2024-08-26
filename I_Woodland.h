#ifndef PRAC_3_I_WOODLAND_H
#define PRAC_3_I_WOODLAND_H

#include "Infantry.h"

class I_Woodland : public Infantry{
    public:
        I_Woodland(int health, int damage, int defence, int amount, int ms);
        virtual void move();
        virtual void attack();

        virtual LegionUnit *clone();
        virtual bool add(UnitComponent *component);
        virtual bool remove(UnitComponent *component);
};


#endif //PRAC_3_I_WOODLAND_H
