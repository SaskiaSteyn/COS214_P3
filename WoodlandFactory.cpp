#include "WoodlandFactory.h"

WoodlandFactory::WoodlandFactory(Infantry *infantryClone, Cavalry *cavalryClone, Artillery *artilleryClone): LegionFactory(infantryClone, cavalryClone, artilleryClone) {
    // Inherited
}

void WoodlandFactory::setInfantryClone(Infantry * newClone) {
    this->infantryClone = newClone;
}

void WoodlandFactory::setCavalryClone(Cavalry * newClone) {
    this->cavalryClone = newClone;

}

void WoodlandFactory::setArtilleryClone(Artillery * newClone) {
    this->artilleryClone = newClone;

}

Artillery *WoodlandFactory::createArtillery() {
    return this->artilleryClone->clone();
}

Cavalry *WoodlandFactory::createCavalry() {
    return this->cavalryClone->clone();
}

Infantry *WoodlandFactory::createInfantry() {
    return this->infantryClone->clone();
}
