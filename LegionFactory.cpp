#include "LegionFactory.h"

LegionFactory::LegionFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone) {
    this->infantryClone = infantryClone;
    this->cavalryClone = cavalryClone;
    this->artilleryClone = artilleryClone;
}

void LegionFactory::setClones(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone) {
    this->infantryClone = infantryClone;
    this->cavalryClone = cavalryClone;
    this->artilleryClone = artilleryClone;
}