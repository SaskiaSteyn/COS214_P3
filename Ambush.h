#ifndef PRAC_3_AMBUSH_H
#define PRAC_3_AMBUSH_H

#include "BattleStrategy.h"

class Ambush : public BattleStrategy{
    public:
        string getType();
        const string type = "Ambush";
};


#endif //PRAC_3_AMBUSH_H
