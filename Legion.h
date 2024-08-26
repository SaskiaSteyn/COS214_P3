#ifndef PRAC_3_LEGION_H
#define PRAC_3_LEGION_H

#include "UnitComponent.h"
#include <vector>

using namespace std;

class Legion : public UnitComponent{
    public:
        Legion();
        void move();
        void attack();
        bool add(UnitComponent * component);
        bool remove(UnitComponent * component);

    protected:
        vector<UnitComponent*> unitComponent;
};


#endif //PRAC_3_LEGION_H
