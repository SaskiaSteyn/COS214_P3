#ifndef PRAC_3_INFANTRY_H
#define PRAC_3_INFANTRY_H

#include "LegionUnit.h"

#include <iostream>
using namespace std;

class Infantry : public LegionUnit{
    public:
        void move();
        void attack();
        void reportingForDuty();

        const string type = "Infantry";
};


#endif //PRAC_3_INFANTRY_H
