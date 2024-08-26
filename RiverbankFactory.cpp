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

void RiverbankFactory::deployArtillery() {

}

void RiverbankFactory::deployInfantry() {

}

void RiverbankFactory::deployCavalry() {

}
