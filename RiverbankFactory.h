#ifndef PRAC_3_RIVERBANKFACTORY_H
#define PRAC_3_RIVERBANKFACTORY_H

#include "LegionFactory.h"

class RiverbankFactory : public LegionFactory{
    public:
        RiverbankFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone);
        void setInfantryClone(Infantry * newClone);
        void setCavalryClone(Cavalry * newClone);
        void setArtilleryClone(Artillery * newClone);

        Infantry * createInfantry();
        Cavalry * createCavalry();
        Artillery * createArtillery();

};


#endif //PRAC_3_RIVERBANKFACTORY_H
