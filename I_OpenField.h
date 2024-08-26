#ifndef PRAC_3_I_OPENFIELD_H
#define PRAC_3_I_OPENFIELD_H

#include "Infantry.h"

class I_OpenField : public Infantry{
    public:
        I_OpenField(int health, int damage, int defence, int amount, int ms);
        void move();
        void attack();
        LegionUnit * clone();

        virtual bool add(UnitComponent *component);
        virtual bool remove(UnitComponent *component);
};


#endif //PRAC_3_I_OPENFIELD_H
