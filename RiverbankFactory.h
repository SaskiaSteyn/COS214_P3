#ifndef PRAC_3_RIVERBANKFACTORY_H
#define PRAC_3_RIVERBANKFACTORY_H

#include "LegionFactory.h"

class RiverbankFactory : public LegionFactory{
    public:
        RiverbankFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone);
        Infantry * createInfantry();
        Cavalry * createCavalry();
        Artillery * createArtillery();
        void deployArtillery();
        void deployInfantry();
        void deployCavalry();

};


#endif //PRAC_3_RIVERBANKFACTORY_H
