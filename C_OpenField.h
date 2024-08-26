#ifndef PRAC_3_C_OPENFIELD_H
#define PRAC_3_C_OPENFIELD_H

#include "Cavalry.h"

class C_OpenField : public Cavalry{
    public:
        C_OpenField(int health, int damage, int defence, int amount, int ms);
        virtual void move();
        virtual void attack();
        virtual LegionUnit * clone();
};


#endif //PRAC_3_C_OPENFIELD_H
