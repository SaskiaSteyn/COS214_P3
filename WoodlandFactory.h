#ifndef PRAC_3_WOODLANDFACTORY_H
#define PRAC_3_WOODLANDFACTORY_H

#include "LegionFactory.h"


class WoodlandFactory : public LegionFactory{
    public:
        Infantry * createInfantry();
        Cavalry * createCavalry();
        Artillery * createArtillery();
        void deployArtillery();
        void deployInfantry();
        void deployCavalry();
};


#endif //PRAC_3_WOODLANDFACTORY_H
