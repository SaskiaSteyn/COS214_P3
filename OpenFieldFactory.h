#ifndef PRAC_3_OPENFIELDFACTORY_H
#define PRAC_3_OPENFIELDFACTORY_H

#include "LegionFactory.h"

class OpenFieldFactory : public LegionFactory{
    public:
        Infantry * createInfantry();
        Cavalry * createCavalry();
        Artillery * createArtillery();
        void deployArtillery();
        void deployInfantry();
        void deployCavalry();
};


#endif //PRAC_3_OPENFIELDFACTORY_H
