#ifndef PRAC_3_LEGIONFACTORY_H
#define PRAC_3_LEGIONFACTORY_H

#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"


class LegionFactory {
    protected:
        Infantry * infantryClone;
        Cavalry * cavalryClone;
        Artillery * artilleryClone;
    public:
        LegionFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone);
        void setClones(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone);
        virtual Infantry * createInfantry() = 0;
        virtual Cavalry * createCavalry() = 0;
        virtual Artillery * createArtillery() = 0;
};


#endif //PRAC_3_LEGIONFACTORY_H
