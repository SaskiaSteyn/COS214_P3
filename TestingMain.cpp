#include <iostream>

#include "LegionFactory.h"
#include "WoodlandFactory.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"
#include "I_Woodland.h"
#include "A_Woodland.h"
#include "C_Woodland.h"
#include "I_OpenField.h"
#include "A_OpenField.h"
#include "C_OpenField.h"
#include "I_Riverbank.h"
#include "A_Riverbank.h"
#include "C_Riverbank.h"
#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"

using namespace std;

void testFactories() {
    Infantry * woodlandInfantry = new I_Woodland(100, 100, 100, 100, 100, "Woodland bois");
    Artillery * woodlandArtillery = new A_Woodland(100, 100 ,100, 100, 100, "Woodland shooty bois");
    Cavalry * woodlandCavalry = new C_Woodland(100, 100, 100, 100, 100, "Woodland horsie bois");
    LegionFactory * woodFactory = new WoodlandFactory(woodlandInfantry, woodlandCavalry, woodlandArtillery);

    Artillery * cloneA = woodFactory->createArtillery();
    Cavalry * cloneC = woodFactory->createCavalry();
    Infantry * cloneI = woodFactory->createInfantry();

    cout << "==================== Testing Woodland Factory ==================== \n \n";

    woodlandInfantry->move();
    woodlandInfantry->attack();

    woodlandArtillery->move();
    woodlandArtillery->attack();

    woodlandCavalry->move();
    woodlandCavalry->attack();

    cout << "\n \n === Testing clone === \n \n";

    cloneA->move();
    cloneA->attack();

    cloneC->move();
    cloneC->attack();

    cloneI->move();
    cloneI->attack();


    cout << "\n \n ==================== Testing Open Field Factory ==================== \n \n";

    Infantry * openFieldInfantry = new I_OpenField(100, 100, 100, 100, 100, "Open field bois");
    Artillery * openFieldArtillery = new A_OpenField(100, 100 ,100, 100, 100, "Field shooty bois");
    Cavalry * openFieldCavalry = new C_OpenField(100, 100, 100, 100, 100, "Field horsie bois");
    LegionFactory * fieldFactory = new OpenFieldFactory(openFieldInfantry, openFieldCavalry, openFieldArtillery);

    Artillery * cloneA_OF = fieldFactory->createArtillery();
    Cavalry * cloneC_OF = fieldFactory->createCavalry();
    Infantry * cloneI_OF = fieldFactory->createInfantry();

    openFieldInfantry->move();
    openFieldInfantry->attack();

    openFieldArtillery->move();
    openFieldArtillery->attack();

    openFieldCavalry->move();
    openFieldCavalry->attack();

    cout << "\n \n === Testing clone === \n \n";

    cloneA_OF->move();
    cloneA_OF->attack();

    cloneC_OF->move();
    cloneC_OF->attack();

    cloneI_OF->move();
    cloneI_OF->attack();

    cout << "\n \n ==================== Testing Riverbank Factory ==================== \n \n";

    Infantry * riverBankInfantry = new I_Riverbank(100, 100, 100, 100, 100, "Muddy bois");
    Artillery * riverBankArtillery = new A_Riverbank(100, 100 ,100, 100, 100, "Muddy shooty bois");
    Cavalry * riverBankCavalry = new C_Riverbank(100, 100, 100, 100, 100, "Muddy horsie bois");
    LegionFactory * riverFactory = new RiverbankFactory(riverBankInfantry, riverBankCavalry, riverBankArtillery);

    Artillery * cloneA_RB = riverFactory->createArtillery();
    Cavalry * cloneC_RB = riverFactory->createCavalry();
    Infantry * cloneI_RB = riverFactory->createInfantry();

    riverBankInfantry->move();
    riverBankInfantry->attack();

    riverBankArtillery->move();
    riverBankArtillery->attack();

    riverBankCavalry->move();
    riverBankCavalry->attack();

    cout << "\n \n === Testing clone === \n \n";

    cloneA_RB->move();
    cloneA_RB->attack();

    cloneC_RB->move();
    cloneC_RB->attack();

    cloneI_RB->move();
    cloneI_RB->attack();


    cout << "\n \n ==================== Testing setClone method ==================== \n \n";
    RiverbankFactory* riverFactorySetting = new RiverbankFactory(riverBankInfantry, riverBankCavalry, riverBankArtillery);
    riverFactorySetting->setArtilleryClone(cloneA_RB);
    riverFactorySetting->setCavalryClone(cloneC_RB);
    riverFactorySetting->setInfantryClone(cloneI_RB);

    OpenFieldFactory * openFieldFactorySetting = new OpenFieldFactory(openFieldInfantry, openFieldCavalry, openFieldArtillery);
    openFieldFactorySetting->setInfantryClone(cloneI_OF);
    openFieldFactorySetting->setCavalryClone(cloneC_OF);
    openFieldFactorySetting->setArtilleryClone(cloneA_OF);

    WoodlandFactory* woodlandFactorySetting = new WoodlandFactory(woodlandInfantry, woodlandCavalry, woodlandArtillery);
    woodlandFactorySetting->setArtilleryClone(cloneA);
    woodlandFactorySetting->setCavalryClone(cloneC);
    woodlandFactorySetting->setInfantryClone(cloneI);
}

void testingBattle(){
    Infantry * riverBankInfantry = new I_Riverbank(100, 100, 100, 100, 100, "Muddy bois");
    Artillery * riverBankArtillery = new A_Riverbank(100, 100 ,100, 100, 100, "Muddy shooty bois");
    Cavalry * riverBankCavalry = new C_Riverbank(100, 100, 100, 100, 100, "Muddy horsie bois");

    cout << "\n \n ==================== Testing Flanking method ==================== \n \n";
    BattleStrategy * flankingStrat = new Flanking();
    riverBankInfantry->setStrategy(flankingStrat);
    riverBankArtillery->setStrategy(flankingStrat);
    riverBankCavalry->setStrategy(flankingStrat);

    riverBankInfantry->reportingForDuty();
    riverBankArtillery->reportingForDuty();
    riverBankCavalry->reportingForDuty();

    cout << "\n \n ==================== Testing Ambush method ==================== \n \n";
    BattleStrategy * ambushStrat = new Ambush();
    riverBankInfantry->setStrategy(ambushStrat);
    riverBankArtillery->setStrategy(ambushStrat);
    riverBankCavalry->setStrategy(ambushStrat);

    riverBankInfantry->reportingForDuty();
    riverBankArtillery->reportingForDuty();
    riverBankCavalry->reportingForDuty();


    cout << "\n \n ==================== Testing Fortification method ==================== \n \n";
    BattleStrategy * fortStrat = new Fortification();
    riverBankInfantry->setStrategy(fortStrat);
    riverBankArtillery->setStrategy(fortStrat);
    riverBankCavalry->setStrategy(fortStrat);

    riverBankInfantry->reportingForDuty();
    riverBankArtillery->reportingForDuty();
    riverBankCavalry->reportingForDuty();
}

//int main() {
//    testFactories();
//    testingBattle();
//    return 0;
//};