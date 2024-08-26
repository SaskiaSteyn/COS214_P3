#ifndef PRAC_3_A_OPENFIELD_H
#define PRAC_3_A_OPENFIELD_H

#include "Artillery.h"

class A_OpenField : public Artillery{
    public:
        A_OpenField(int health, int damage, int defence, int amount, int ms, string unitName);
        virtual void move();
        virtual void attack();
        virtual Artillery * clone();
};


#endif //PRAC_3_A_OPENFIELD_H
