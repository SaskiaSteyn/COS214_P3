#ifndef PRAC_3_FLANKING_H
#define PRAC_3_FLANKING_H

#include "BattleStrategy.h"

class Flanking : public BattleStrategy{
    public:
        string engage();
        string getType();
        const string type = "Flanking";
};


#endif //PRAC_3_FLANKING_H
