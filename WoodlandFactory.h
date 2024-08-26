#ifndef PRAC_3_WOODLANDFACTORY_H
#define PRAC_3_WOODLANDFACTORY_H

#include "LegionFactory.h"


class WoodlandFactory : public LegionFactory{
    public:
        WoodlandFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone);
        void setInfantryClone();
        void setCavalryClone();
        void setArtilleryClone();

        Artillery * deployArtillery();
        Infantry * deployInfantry();
        Cavalry * deployCavalry();

        Infantry * createInfantry();
        Cavalry * createCavalry();
        Artillery * createArtillery();
};


#endif //PRAC_3_WOODLANDFACTORY_H
