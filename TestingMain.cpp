#include <iostream>

#include "LegionFactory.h"
#include "WoodlandFactory.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"
#include "I_Woodland.h"
#include "A_Woodland.h"
#include "C_Woodland.h"

using namespace std;

void testFactories() {
    Infantry * woodlandInfantry = new I_Woodland(100, 100, 100, 100, 100);
    Artillery * woodlandArtillery = new A_Woodland(100, 100 ,100, 100, 100);
    Cavalry * woodlandCavalry = new C_Woodland(100, 100, 100, 100, 100);
    LegionFactory * woodFactory = new WoodlandFactory(woodlandInfantry, woodlandCavalry, woodlandArtillery);

    Artillery * cloneA = woodFactory->createArtillery();
    Cavalry * cloneC = woodFactory->createCavalry();
    Infantry * cloneI = woodFactory->createInfantry();
}

int main() {
    testFactories();
    return 0;
};