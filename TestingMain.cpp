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
    I_Woodland * woodlandInfantry = new I_Woodland(100, 100, 100, 100, 100);
    A_Woodland * woodlandArtillery = new A_Woodland(100, 100 ,100, 100, 100);
    C_Woodland * woodlandCavalry = new C_Woodland(100, 100, 100, 100, 100);
    WoodlandFactory * woodFactory = new WoodlandFactory(woodlandInfantry, woodlandCavalry, woodlandArtillery);

}

int main() {
    return 0;
};