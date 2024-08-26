#include "RiverbankFactory.h"

RiverbankFactory::RiverbankFactory(Infantry *infantryClone, Cavalry *cavalryClone, Artillery *artilleryClone) : LegionFactory(infantryClone, cavalryClone, artilleryClone) {
    // Inherited
}

Infantry *RiverbankFactory::createInfantry() {
    return nullptr;
}

Cavalry *RiverbankFactory::createCavalry() {
    return nullptr;
}

Artillery *RiverbankFactory::createArtillery() {
    return nullptr;
}


void RiverbankFactory::setInfantryClone() {

}

void RiverbankFactory::setCavalryClone() {

}

void RiverbankFactory::setArtilleryClone() {

}

Artillery *RiverbankFactory::deployArtillery() {
    return nullptr;
}

Infantry *RiverbankFactory::deployInfantry() {
    return nullptr;
}

Cavalry *RiverbankFactory::deployCavalry() {
    return nullptr;
}
