#ifndef PRAC_3_I_OPENFIELD_H
#define PRAC_3_I_OPENFIELD_H

#include "Infantry.h"

class I_OpenField : public Infantry{
    public:
        I_OpenField(int health, int damage, int defence, int amount, int ms, string unitName);
        virtual void move();
        virtual void attack();
        virtual Infantry * clone();
};


#endif //PRAC_3_I_OPENFIELD_H
