#ifndef PRAC_3_C_WOODLAND_H
#define PRAC_3_C_WOODLAND_H

#include "Cavalry.h"

class C_Woodland : public Cavalry{
    public:
        C_Woodland(int health, int damage, int defence, int amount, int ms, string unitName);
        virtual void move();
        virtual void attack();
        virtual Cavalry * clone();
};


#endif //PRAC_3_C_WOODLAND_H
