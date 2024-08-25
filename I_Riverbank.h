#ifndef PRAC_3_I_RIVERBANK_H
#define PRAC_3_I_RIVERBANK_H

#include "Infantry.h"

class I_Riverbank : public Infantry{
    public:
        virtual void move();
        virtual void attack();
};


#endif //PRAC_3_I_RIVERBANK_H
