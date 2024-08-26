#ifndef PRAC_3_C_RIVERBANK_H
#define PRAC_3_C_RIVERBANK_H

#include "Cavalry.h"

class C_Riverbank : public Cavalry {
    public:
        C_Riverbank(int health, int damage, int defence, int amount, int ms, string unitName);
        virtual void move();
        virtual void attack();
        virtual Cavalry * clone();
};


#endif //PRAC_3_C_RIVERBANK_H
