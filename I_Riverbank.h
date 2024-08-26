#ifndef PRAC_3_I_RIVERBANK_H
#define PRAC_3_I_RIVERBANK_H

#include "Infantry.h"

class I_Riverbank : public Infantry{
    public:
        I_Riverbank(int health, int damage, int defence, int amount, int ms);
        virtual void move();
        virtual void attack();
        LegionUnit * clone();

        virtual bool add(UnitComponent *component);
        virtual bool remove(UnitComponent *component);
};


#endif //PRAC_3_I_RIVERBANK_H
