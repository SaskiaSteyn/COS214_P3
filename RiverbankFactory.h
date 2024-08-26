#ifndef PRAC_3_RIVERBANKFACTORY_H
#define PRAC_3_RIVERBANKFACTORY_H

#include "LegionFactory.h"

class RiverbankFactory : public LegionFactory{
    public:
        RiverbankFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone);
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


#endif //PRAC_3_RIVERBANKFACTORY_H
