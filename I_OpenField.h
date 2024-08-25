#ifndef PRAC_3_I_OPENFIELD_H
#define PRAC_3_I_OPENFIELD_H

#include "Infantry.h"

class I_OpenField : public Infantry{
    public:
        virtual void move();
        virtual void attack();
};


#endif //PRAC_3_I_OPENFIELD_H
