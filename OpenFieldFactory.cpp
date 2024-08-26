#include "OpenFieldFactory.h"

OpenFieldFactory::OpenFieldFactory(Infantry * infantryClone, Cavalry * cavalryClone, Artillery * artilleryClone): LegionFactory(infantryClone, cavalryClone, artilleryClone) {
    // Inherited
}

Infantry *OpenFieldFactory::createInfantry() {
    return nullptr;
}

Cavalry *OpenFieldFactory::createCavalry() {
    return nullptr;
}

Artillery *OpenFieldFactory::createArtillery() {
    return nullptr;
}


void OpenFieldFactory::setInfantryClone() {

}

void OpenFieldFactory::setCavalryClone() {

}

void OpenFieldFactory::setArtilleryClone() {

}

Artillery *OpenFieldFactory::deployArtillery() {
    return nullptr;
}

Infantry *OpenFieldFactory::deployInfantry() {
    return nullptr;
}

Cavalry *OpenFieldFactory::deployCavalry() {
    return nullptr;
}
