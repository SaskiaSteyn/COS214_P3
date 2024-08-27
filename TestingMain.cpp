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
#include "TacticalCommand.h"
#include "BattleStrategy.h"
#include "Legion.h"

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

    cout << flankingStrat->engage();

    cout << "\n \n ==================== Testing Ambush method ==================== \n \n";
    BattleStrategy * ambushStrat = new Ambush();
    riverBankInfantry->setStrategy(ambushStrat);
    riverBankArtillery->setStrategy(ambushStrat);
    riverBankCavalry->setStrategy(ambushStrat);

    riverBankInfantry->reportingForDuty();
    riverBankArtillery->reportingForDuty();
    riverBankCavalry->reportingForDuty();

    cout << ambushStrat->engage();

    cout << "\n \n ==================== Testing Fortification method ==================== \n \n";
    BattleStrategy * fortStrat = new Fortification();
    riverBankInfantry->setStrategy(fortStrat);
    riverBankArtillery->setStrategy(fortStrat);
    riverBankCavalry->setStrategy(fortStrat);

    riverBankInfantry->reportingForDuty();
    riverBankArtillery->reportingForDuty();
    riverBankCavalry->reportingForDuty();

    cout << fortStrat->engage();
}

void testingAbstractProducts(){

    cout << "\n \n ==================== Adding sub legion: Infantry ==================== \n \n ";

    Infantry * testingI = new I_OpenField(100, 100, 100, 100, 100, "Testing Infantry");
    Infantry * component = new I_OpenField(50, 50, 50, 50, 50, "Infantry Sub legion");

    testingI->add(component);
    testingI->remove(component);

    cout << "\n \n ==================== Adding sub legion: Cavalry ==================== \n \n ";

    Cavalry * testingC = new C_OpenField(100, 100, 100, 100, 100, "Testing Cavalry");
    Cavalry * component2 = new C_OpenField(50, 50, 50, 50, 50, "Cavalry Sub legion");

    testingC->add(component2);
    testingC->remove(component2);

    cout << "\n \n ==================== Adding sub legion: Artillery ==================== \n \n ";

    Artillery * testingA = new A_OpenField(100, 100, 100, 100, 100, "Testing Artillery");
    Artillery * component3 = new A_OpenField(50, 50, 50, 50, 50, "Artillery Sub legion");

    testingA->add(component3);
    testingA->remove(component3);
}

void testingLegions(){
    cout << "\n \n ==================== Testing Infantry Legions ==================== \n \n ";

    Legion * legion = new Legion();

    legion->setUnitName("1st Battalion");

    Infantry * subLegionInfantry = new I_OpenField(100, 100, 100, 100, 100, "Infantry 1st Regiment");
    Cavalry * subLegionCavalry = new C_OpenField(100, 100, 100, 100, 100, "Cavalry 1st Regiment");
    Artillery * subLegionArtillery = new A_OpenField(100, 100, 100, 100, 100, "Artillery 1st Regiment");
    legion->add(subLegionInfantry);
    legion->add(subLegionCavalry);
    legion->add(subLegionArtillery);

    cout << endl;

    legion->move();

    cout << endl;

    legion->attack();

    cout << "Adding sub-legions";

    Legion * subLegion = new Legion();

    subLegion->setUnitName("1st Brigade");

    Infantry * subLegionInfantry2 = new I_OpenField(100, 100, 100, 100, 100, "Infantry 2nd Regiment");
    Cavalry * subLegionCavalry2 = new C_OpenField(100, 100, 100, 100, 100, "Cavalry 2nd Regiment");
    Artillery * subLegionArtillery2 = new A_OpenField(100, 100, 100, 100, 100, "Artillery 2nd Regiment");
    Infantry * subLegionInfantry3 = new I_OpenField(100, 100, 100, 100, 100, "Infantry 3st Regiment");
    Cavalry * subLegionCavalry3 = new C_OpenField(100, 100, 100, 100, 100, "Cavalry 3st Regiment");
    Artillery * subLegionArtillery3 = new A_OpenField(100, 100, 100, 100, 100, "Artillery 3st Regiment");
    subLegion->add(subLegionInfantry2);
    subLegion->add(subLegionCavalry2);
    subLegion->add(subLegionArtillery2);
    subLegion->add(subLegionInfantry3);
    subLegion->add(subLegionCavalry3);
    subLegion->add(subLegionArtillery3);

    legion->add(subLegion);

    cout << "\n \n ==================== Testing Sub-Legions ==================== \n \n ";

    cout << endl;

    legion->move();

    cout << endl;

    legion->attack();

}

void testStrategies() {
    cout << "\n \n ==================== Testing Strategy ==================== \n \n";

    TacticalCommand command;

    BattleStrategy *ambush = new Ambush();
    BattleStrategy *flank = new Flanking();
    BattleStrategy *fort = new Fortification();

    command.setStrategy(ambush);
    command.executeStrategy();

    command.setStrategy(flank);
    command.executeStrategy();

    command.setStrategy(fort);
    command.executeStrategy();

    command.chooseBestStrategy();
}

int main() {
    testFactories();
    testingBattle();
    testStrategies();
    return 0;
};
