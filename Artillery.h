#ifndef PRAC_3_ARTILLERY_H
#define PRAC_3_ARTILLERY_H

#include "LegionUnit.h"

class Artillery : public LegionUnit{
    public:
        virtual void move();
        virtual void attack();
};


#endif //PRAC_3_ARTILLERY_H
