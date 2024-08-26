#include "RiverbankFactory.h"

RiverbankFactory::RiverbankFactory(Infantry *infantryClone, Cavalry *cavalryClone, Artillery *artilleryClone) : LegionFactory(infantryClone, cavalryClone, artilleryClone) {
    // Inherited
}

Infantry *RiverbankFactory::createInfantry() {
    return this->infantryClone->clone();
}

Cavalry *RiverbankFactory::createCavalry() {
    return this->cavalryClone->clone();
}

Artillery *RiverbankFactory::createArtillery() {
    return this->artilleryClone->clone();
}


void RiverbankFactory::setInfantryClone(Infantry * newClone) {
    this->infantryClone = newClone;
}

void RiverbankFactory::setCavalryClone(Cavalry * newClone) {
    this->cavalryClone = newClone;
}

void RiverbankFactory::setArtilleryClone(Artillery * newClone) {
    this->artilleryClone = newClone;
}
