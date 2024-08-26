#include "WoodlandFactory.h"

WoodlandFactory::WoodlandFactory(Infantry *infantryClone, Cavalry *cavalryClone, Artillery *artilleryClone): LegionFactory(infantryClone, cavalryClone, artilleryClone) {
    // Inherited
}

void WoodlandFactory::setInfantryClone() {

}

void WoodlandFactory::setCavalryClone() {

}

void WoodlandFactory::setArtilleryClone() {

}

Artillery *WoodlandFactory::deployArtillery() {
    return nullptr;
}

Infantry *WoodlandFactory::deployInfantry() {
    return nullptr;
}

Cavalry *WoodlandFactory::deployCavalry() {
    return nullptr;
}

Artillery *WoodlandFactory::createArtillery() {
    return nullptr;
}

Cavalry *WoodlandFactory::createCavalry() {
    return nullptr;
}

Infantry *WoodlandFactory::createInfantry() {
    return nullptr;
}
