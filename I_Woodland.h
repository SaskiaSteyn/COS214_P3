#ifndef PRAC_3_I_WOODLAND_H
#define PRAC_3_I_WOODLAND_H

#include "Infantry.h"

class I_Woodland : public Infantry{
    public:
        virtual void move();
        virtual void attack();
};


#endif //PRAC_3_I_WOODLAND_H
