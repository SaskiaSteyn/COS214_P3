#ifndef PRAC_3_FORTIFICATION_H
#define PRAC_3_FORTIFICATION_H

#include "BattleStrategy.h"

class Fortification : public BattleStrategy{
    public:
        string getType();
        const string type = "Fortification";
};


#endif //PRAC_3_FORTIFICATION_H
