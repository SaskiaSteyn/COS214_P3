#ifndef PRAC_3_A_RIVERBANK_H
#define PRAC_3_A_RIVERBANK_H

#include "Artillery.h"

class A_Riverbank : public Artillery {
    public:
        virtual void move();
        virtual void attack();

};


#endif //PRAC_3_A_RIVERBANK_H
