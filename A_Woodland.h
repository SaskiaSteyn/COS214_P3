#ifndef PRAC_3_A_WOODLAND_H
#define PRAC_3_A_WOODLAND_H

#include "Artillery.h"

class A_Woodland : public Artillery{
    public:
        virtual void move();
        virtual void attack();
};


#endif //PRAC_3_A_WOODLAND_H
