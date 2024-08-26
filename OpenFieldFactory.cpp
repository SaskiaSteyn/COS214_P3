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

void OpenFieldFactory::deployArtillery() {

}

void OpenFieldFactory::deployInfantry() {

}

void OpenFieldFactory::deployCavalry() {

}
