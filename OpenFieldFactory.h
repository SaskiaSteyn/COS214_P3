#ifndef PRAC_3_OPENFIELDFACTORY_H
#define PRAC_3_OPENFIELDFACTORY_H

#include "LegionFactory.h"

class OpenFieldFactory : public LegionFactory{
    public:
        OpenFieldFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone);
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


#endif //PRAC_3_OPENFIELDFACTORY_H
