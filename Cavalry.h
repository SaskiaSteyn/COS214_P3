#ifndef PRAC_3_CAVALRY_H
#define PRAC_3_CAVALRY_H

#include "LegionUnit.h"

class Cavalry : public LegionUnit {
    public:
        virtual void move();
        virtual void attack();
};


#endif //PRAC_3_CAVALRY_H
