#include "OpenFieldFactory.h"

OpenFieldFactory::OpenFieldFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone): LegionFactory(infantryClone, cavalryClone, artilleryClone) {
    // Inherited
}

Infantry *OpenFieldFactory::createInfantry() {
    return this->infantryClone->clone();
}

Cavalry *OpenFieldFactory::createCavalry() {
    return this->cavalryClone->clone();
}

Artillery *OpenFieldFactory::createArtillery() {
    return this->artilleryClone->clone();
}


void OpenFieldFactory::setInfantryClone(Infantry * newClone) {
    this->infantryClone = newClone;
}

void OpenFieldFactory::setCavalryClone(Cavalry * newClone) {
    this->cavalryClone = newClone;
}

void OpenFieldFactory::setArtilleryClone(Artillery * newClone) {
    this->artilleryClone = newClone;
}
