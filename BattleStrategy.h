#ifndef PRAC_3_BATTLESTRATEGY_H
#define PRAC_3_BATTLESTRATEGY_H

#include <iostream>
#include <map>

using namespace std;

class BattleStrategy {
    private:
        int victories;
    public:
        virtual string getType() = 0;
        virtual string engage() = 0;
        int getVictories();
        void winBattle();
};


#endif //PRAC_3_BATTLESTRATEGY_H
