#ifndef PRAC_3_UNITCOMPONENT_H
#define PRAC_3_UNITCOMPONENT_H

#include <iostream>
using namespace std;

class UnitComponent {
    public:
        virtual void move() = 0;
        virtual void attack() = 0;
        virtual bool add(UnitComponent * component) = 0;
        virtual bool remove(UnitComponent * component) = 0;

        void setUnitName(string name);
        string getUnitName();

    protected:
        string unitName;

};


#endif //PRAC_3_UNITCOMPONENT_H
