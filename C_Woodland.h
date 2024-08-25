#ifndef PRAC_3_C_WOODLAND_H
#define PRAC_3_C_WOODLAND_H

#include "Cavalry.h"

class C_Woodland : public Cavalry{
    public:
        virtual void move();
        virtual void attack();
};


#endif //PRAC_3_C_WOODLAND_H
