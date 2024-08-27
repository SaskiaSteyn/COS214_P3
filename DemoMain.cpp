#include <iostream>
#include <string>

// Factory Dependencies

//#include "LegionUnit.h"

//#include "Infantry.h"
#include "I_Woodland.h"
#include "I_Riverbank.h"
#include "I_OpenField.h"

//#include "Cavalry.h"
#include "C_Woodland.h"
#include "C_Riverbank.h"
#include "C_OpenField.h"

//#include "Artillery.h"
#include "A_Woodland.h"
#include "A_Riverbank.h"
#include "A_OpenField.h"

//#include "LegionFactory.h"
#include "WoodlandFactory.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"



// Composites Dependencies

#include "UnitComponent.h"
#include "Legion.h"



// Memento Dependencies

#include "TacticalPlanner.h"
#include "TacticalMemento.h"
#include "WarArchives.h"



// Strategy Dependencies

#include "TacticalCommand.h"
#include "BattleStrategy.h"

#include "Flanking.h"
#include "Ambush.h"
#include "Fortification.h"

// Demo Help
#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    I_Woodland *woodlandInfantry = new I_Woodland(200, 50, 5, 0, 0, "WoodlandInfantry");
    C_Woodland *woodlandCavalry = new C_Woodland(250, 84, 10, 0, 0, "WoodlandCavalry");
    A_Woodland *woodlandArtillery = new A_Woodland(100, 150, 0, 0, 0, "WoodlandArtillery");

    I_Riverbank *riverbankInfantry = new I_Riverbank(200, 50, 5, 0, 0, "RiverbankInfantry");
    C_Riverbank *riverbankCavalry = new C_Riverbank(250, 84, 10, 0, 0, "RiverbankCavalry");
    A_Riverbank *riverbankArtillery = new A_Riverbank(100, 150, 0, 0, 0, "RiverbankArtillery");

    I_OpenField *openFieldInfantry = new I_OpenField(200, 50, 5, 0, 0, "OpenFieldInfantry");
    C_OpenField *openFieldCavalry = new C_OpenField(250, 84, 10, 0, 0, "OpenFieldCavalry");
    A_OpenField *openFieldArtillery = new A_OpenField(100, 150, 0, 0, 0, "OpenFieldArtillery");


    // Initialized Factories
    WoodlandFactory woodlandFactory(woodlandInfantry, woodlandCavalry, woodlandArtillery);
    RiverbankFactory riverbankFactory(riverbankInfantry, riverbankCavalry, riverbankArtillery);
    OpenFieldFactory openFieldFactory(openFieldInfantry, openFieldCavalry, openFieldArtillery);

    // Game Objects
    Legion blueLegion;
    Legion redLegion;

    TacticalCommand blueCommand;
    TacticalCommand redCommand;

    WarArchives blueArchive;
    WarArchives redArchive;

    srand(static_cast<unsigned int>(time(nullptr)));
    int coin = rand() % 2;

    cout << "\n \n ==================== Welcome to War! ==================== \n \n";


    cout << "------------------------------------------" << endl;
    cout << "|                           |            |" << endl;
    cout << "|                           |            |" << endl;
    cout << "|                  3        |            |" << endl;
    cout << "|                           |____________|" << endl;
    cout << "|-                                       |" << endl;
    cout << "| -                                      |" << endl;
    cout << "|  ---                                   |" << endl;
    cout << "|     --              -------------------|" << endl;
    cout << "|       -        -----                   |" << endl;
    cout << "|        --------                        |" << endl;
    cout << "|-                                       |" << endl;
    cout << "| -                 2                    |" << endl;
    cout << "|  ---                                   |" << endl;
    cout << "|     --              -------------------|" << endl;
    cout << "|       -        -----                   |" << endl;
    cout << "|        --------                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "|   xx             xx               xx   |" << endl;
    cout << "|  xxxx           xxxx             xxxx  |" << endl;
    cout << "|   xx             xx               xx   |" << endl;
    cout << "|          xx              xx            |" << endl;
    cout << "|         xxxx            xxxx           |" << endl;
    cout << "|          xx       1      xx            |" << endl;
    cout << "|                                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "------------------------------------------" << endl;

    int blueLocation = 0;
    int redLocation = 0;

    cout << "Defending Team chooses a location first" << endl;
    if (coin == 0) {
        cout << "Blue Team is on defence" << endl;

        cout << "Choose a location to set up camp. Type only the number: (1. Woodlands | 2. Riverbank | 3. Open Field)" << endl << "Choice: ";
        cin >> blueLocation;

        while (blueLocation != 1 && blueLocation != 2 && blueLocation != 3) {
            cout << "Choose a location to set up camp. Type only the number: (1. Woodlands | 2. Riverbank | 3. Open Field)" << endl << "Choice: ";
            cin >> blueLocation;
        }

    }
    else {
        cout << "Red Team is on defence" << endl;

        while (redLocation != 1 && redLocation != 2 && redLocation != 3) {
            cout << "Choose a location to set up camp. Type only the number: (1. Woodlands | 2. Riverbank | 3. Open Field)" << endl << "Choice: ";
            cin >> redLocation;
        }
    }

    if (coin == 0) {
        cout << "Red Team is on offense" << endl;

        while (redLocation != 1 && redLocation != 2 && redLocation != 3) {
            cout << "Choose a location to set up camp. Type only the number: (1. Woodlands | 2. Riverbank | 3. Open Field)" << endl << "Choice: ";
            cin >> redLocation;
        }

    }
    else {
        cout << "Blue Team is on offense" << endl;

        while (blueLocation != 1 && blueLocation != 2 && blueLocation != 3) {
            cout << "Choose a location to set up camp. Type only the number: (1. Woodlands | 2. Riverbank | 3. Open Field)" << endl << "Choice: ";
            cin >> blueLocation;
        }
    }




    // Blue Army
    cout << "\n \n ==================== Blue Army ==================== \n \n";
    string strategy;
    while (strategy != "flank" && strategy != "fortify" && strategy != "ambush") {
        cout << "Choose your war strategy: (Flank | Fortify | Ambush)" << endl << "Choice: ";
        cin >> strategy;

        // ToLowerCase
        transform(strategy.begin(), strategy.end(), strategy.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
    }

    BattleStrategy *blueStrategy;

    if (strategy == "flank") {
        blueStrategy = new Flanking();
    }
    else if (strategy == "fortify") {
        blueStrategy = new Fortification();
    }
    else {
        blueStrategy = new Ambush();
    }
    blueCommand.setStrategy(blueStrategy);


    // Red Army
    cout << "\n \n ==================== Red Army ==================== \n \n";
    strategy = "";
    while (strategy != "flank" && strategy != "fortify" && strategy != "ambush") {
        cout << "Choose your war strategy: (Flank | Fortify | Ambush)" << endl << "Choice: ";
        cin >> strategy;

        // ToLowerCase
        transform(strategy.begin(), strategy.end(), strategy.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
    }

    BattleStrategy *redStrategy;

    if (strategy == "flank") {
        redStrategy = new Flanking();
    }
    else if (strategy == "fortify") {
        redStrategy = new Fortification();
    }
    else {
        redStrategy = new Ambush();
    }
    redCommand.setStrategy(redStrategy);




    // Pre-fight map displays
    string blueString;
    string redString;

    if (blueStrategy->getType() == "Flanking") {
        blueString = "I I I C C";
    }
    else if (blueStrategy->getType() == "Ambush") {
        blueString = "I C C C C";
    }
    else {
        blueString = "A A A I I";
    }

    if (redStrategy->getType() == "Flanking") {
        redString = "I I I C C";
    }
    else if (redStrategy->getType() == "Ambush") {
        redString = "I C C C C";
    }
    else {
        redString = "A A A I I";
    }

    string openFields1 = "         ";
    string openFields2 = "         ";

    string riverbank1 = "         ";
    string riverbank2 = "         ";

    string woodlands1 = "         ";
    string woodlands2 = "         ";



    // Mobilising Blue Army
    //Woodlands
    if (blueLocation == 1) {
        if (coin == 0) {
            woodlands1 = blueString;
        }
        else {
            woodlands2 = blueString;
        }

        if (blueStrategy->getType() == "Ambush") {
            // 10 Infantry and 40 Cavalry
            woodlandFactory.setInfantryClone(new I_Woodland(200, 50, 5, 10, 1, "WoodlandInfantry"));
            blueLegion.add(woodlandFactory.createInfantry());

            woodlandFactory.setCavalryClone(new C_Woodland(250, 84, 10, 40, 2, "WoodlandCavalry"));
            blueLegion.add(woodlandFactory.createCavalry());
        }

        if (blueStrategy->getType() == "Fortification") {
            // 30 Artillery  20 Infantry
            woodlandFactory.setInfantryClone(new I_Woodland(200, 50, 5, 20, 1, "WoodlandInfantry"));
            blueLegion.add(woodlandFactory.createInfantry());

            woodlandFactory.setArtilleryClone(new A_Woodland(100, 150, 0, 30, 0, "WoodlandArtillery"));
            blueLegion.add(woodlandFactory.createArtillery());
        }

        if (blueStrategy->getType() == "Flanking") {
            // 30 Infantry  20 Cavalry
            woodlandFactory.setInfantryClone(new I_Woodland(200, 50, 5, 30, 1, "WoodlandInfantry"));
            blueLegion.add(woodlandFactory.createInfantry());

            woodlandFactory.setCavalryClone(new C_Woodland(250, 84, 10, 20, 2, "WoodlandCavalry"));
            blueLegion.add(woodlandFactory.createCavalry());
        }
    }
        // RiverLands
    else if (blueLocation == 2) {
        if (coin == 0) {
            riverbank1 = blueString;
        }
        else {
            riverbank2 = blueString;
        }

        if (blueStrategy->getType() == "Ambush") {
            // 10 Infantry and 40 Cavalry
            riverbankFactory.setInfantryClone(new I_Riverbank(200, 50, 5, 10, 1, "RiverbankInfantry"));
            blueLegion.add(riverbankFactory.createInfantry());

            riverbankFactory.setCavalryClone(new C_Riverbank(250, 84, 10, 40, 2, "RiverbankCavalry"));
            blueLegion.add(riverbankFactory.createCavalry());
        }

        if (blueStrategy->getType() == "Fortification") {
            // 30 Artillery  20 Infantry
            riverbankFactory.setInfantryClone(new I_Riverbank(200, 50, 5, 20, 1, "RiverbankInfantry"));
            blueLegion.add(riverbankFactory.createInfantry());

            riverbankFactory.setArtilleryClone(new A_Riverbank(100, 150, 0, 30, 0, "RiverbankArtillery"));
            blueLegion.add(riverbankFactory.createArtillery());
        }

        if (blueStrategy->getType() == "Flanking") {
            // 30 Infantry  20 Cavalry
            riverbankFactory.setInfantryClone(new I_Riverbank(200, 50, 5, 30, 1, "RiverbankInfantry"));
            blueLegion.add(riverbankFactory.createInfantry());

            riverbankFactory.setCavalryClone(new C_Riverbank(250, 84, 10, 20, 2, "RiverbankCavalry"));
            blueLegion.add(riverbankFactory.createCavalry());
        }
    }
        // OpenFields
    else {
        if (coin == 0) {
            openFields1 = blueString;
        }
        else {
            openFields2 = blueString;
        }

        if (blueStrategy->getType() == "Ambush") {
            // 10 Infantry and 40 Cavalry
            openFieldFactory.setInfantryClone(new I_OpenField(200, 50, 5, 10, 1, "OpenFieldInfantry"));
            blueLegion.add(openFieldFactory.createInfantry());

            openFieldFactory.setCavalryClone(new C_OpenField(250, 84, 10, 40, 2, "OpenFieldCavalry"));
            blueLegion.add(openFieldFactory.createCavalry());
        }

        if (blueStrategy->getType() == "Fortification") {
            // 30 Artillery  20 Infantry
            openFieldFactory.setInfantryClone(new I_OpenField(200, 50, 5, 20, 1, "OpenFieldkInfantry"));
            blueLegion.add(openFieldFactory.createInfantry());

            openFieldFactory.setArtilleryClone(new A_OpenField(100, 150, 0, 30, 0, "OpenFieldArtillery"));
            blueLegion.add(openFieldFactory.createArtillery());
        }

        if (blueStrategy->getType() == "Flanking") {
            // 30 Infantry  20 Cavalry
            openFieldFactory.setInfantryClone(new I_OpenField(200, 50, 5, 30, 1, "OpenFieldInfantry"));
            blueLegion.add(openFieldFactory.createInfantry());

            openFieldFactory.setCavalryClone(new C_OpenField(250, 84, 10, 20, 2, "OpenFieldCavalry"));
            blueLegion.add(openFieldFactory.createCavalry());
        }
    }





    // Mobilising Red Army
    //Woodlands
    if (redLocation == 1) {
        if (coin == 1) {
            woodlands1 = redString;
        }
        else {
            woodlands2 = redString;
        }

        if (redStrategy->getType() == "Ambush") {
            // 10 Infantry and 40 Cavalry
            woodlandFactory.setInfantryClone(new I_Woodland(200, 50, 5, 10, 1, "WoodlandInfantry"));
            redLegion.add(woodlandFactory.createInfantry());

            woodlandFactory.setCavalryClone(new C_Woodland(250, 84, 10, 40, 2, "WoodlandCavalry"));
            redLegion.add(woodlandFactory.createCavalry());
        }

        if (redStrategy->getType() == "Fortification") {
            // 30 Artillery  20 Infantry
            woodlandFactory.setInfantryClone(new I_Woodland(200, 50, 5, 20, 1, "WoodlandInfantry"));
            redLegion.add(woodlandFactory.createInfantry());

            woodlandFactory.setArtilleryClone(new A_Woodland(100, 150, 0, 30, 0, "WoodlandArtillery"));
            redLegion.add(woodlandFactory.createArtillery());
        }

        if (redStrategy->getType() == "Flanking") {
            // 30 Infantry  20 Cavalry
            woodlandFactory.setInfantryClone(new I_Woodland(200, 50, 5, 30, 1, "WoodlandInfantry"));
            redLegion.add(woodlandFactory.createInfantry());

            woodlandFactory.setCavalryClone(new C_Woodland(250, 84, 10, 20, 2, "WoodlandCavalry"));
            redLegion.add(woodlandFactory.createCavalry());
        }
    }
        // RiverLands
    else if (redLocation == 2) {
        if (coin == 1) {
            riverbank1 = redString;
        }
        else {
            riverbank2 = redString;
        }

        if (redStrategy->getType() == "Ambush") {
            // 10 Infantry and 40 Cavalry
            riverbankFactory.setInfantryClone(new I_Riverbank(200, 50, 5, 10, 1, "RiverbankInfantry"));
            redLegion.add(riverbankFactory.createInfantry());

            riverbankFactory.setCavalryClone(new C_Riverbank(250, 84, 10, 40, 2, "RiverbankCavalry"));
            redLegion.add(riverbankFactory.createCavalry());
        }

        if (redStrategy->getType() == "Fortification") {
            // 30 Artillery  20 Infantry
            riverbankFactory.setInfantryClone(new I_Riverbank(200, 50, 5, 20, 1, "RiverbankInfantry"));
            redLegion.add(riverbankFactory.createInfantry());

            riverbankFactory.setArtilleryClone(new A_Riverbank(100, 150, 0, 30, 0, "RiverbankArtillery"));
            redLegion.add(riverbankFactory.createArtillery());
        }

        if (redStrategy->getType() == "Flanking") {
            // 30 Infantry  20 Cavalry
            riverbankFactory.setInfantryClone(new I_Riverbank(200, 50, 5, 30, 1, "RiverbankInfantry"));
            redLegion.add(riverbankFactory.createInfantry());

            riverbankFactory.setCavalryClone(new C_Riverbank(250, 84, 10, 20, 2, "RiverbankCavalry"));
            redLegion.add(riverbankFactory.createCavalry());
        }
    }
        // OpenFields
    else {
        if (coin == 1) {
            openFields1 = redString;
        }
        else {
            openFields2 = redString;
        }

        if (redStrategy->getType() == "Ambush") {
            // 10 Infantry and 40 Cavalry
            openFieldFactory.setInfantryClone(new I_OpenField(200, 50, 5, 10, 1, "OpenFieldInfantry"));
            redLegion.add(openFieldFactory.createInfantry());

            openFieldFactory.setCavalryClone(new C_OpenField(250, 84, 10, 40, 2, "OpenFieldCavalry"));
            redLegion.add(openFieldFactory.createCavalry());
        }

        if (redStrategy->getType() == "Fortification") {
            // 30 Artillery  20 Infantry
            openFieldFactory.setInfantryClone(new I_OpenField(200, 50, 5, 20, 1, "OpenFieldkInfantry"));
            redLegion.add(openFieldFactory.createInfantry());

            openFieldFactory.setArtilleryClone(new A_OpenField(100, 150, 0, 30, 0, "OpenFieldArtillery"));
            redLegion.add(openFieldFactory.createArtillery());
        }

        if (redStrategy->getType() == "Flanking") {
            // 30 Infantry  20 Cavalry
            openFieldFactory.setInfantryClone(new I_OpenField(200, 50, 5, 30, 1, "OpenFieldInfantry"));
            redLegion.add(openFieldFactory.createInfantry());

            openFieldFactory.setCavalryClone(new C_OpenField(250, 84, 10, 20, 2, "OpenFieldCavalry"));
            redLegion.add(openFieldFactory.createCavalry());
        }
    }



    cout << "\n \n ==================== The Battle Begins! ==================== \n \n";

    cout << "------------------------------------------" << endl;
    cout << "|                           |            |" << endl;
    cout << "|        " << openFields1 << "           |           |" << endl;
    cout << "|                           |            |" << endl;
    cout << "|                           |____________|" << endl;
    cout << "|-       " << openFields2 << "                       |" << endl;
    cout << "| -                                      |" << endl;
    cout << "|  ---                                   |" << endl;
    cout << "|     --              -------------------|" << endl;
    cout << "|       -        -----                   |" << endl;
    cout << "|        --------                        |" << endl;
    cout << "|-       " << riverbank1 << "                       |" << endl;
    cout << "| -                                      |" << endl;
    cout << "|  ---   " << riverbank2 << "                       |" << endl;
    cout << "|     --              -------------------|" << endl;
    cout << "|       -        -----                   |" << endl;
    cout << "|        --------                        |" << endl;
    cout << "|                         " << woodlands1 << "      |" << endl;
    cout << "|                         " << woodlands2 << "      |" << endl;
    cout << "|                                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "|   xx             xx               xx   |" << endl;
    cout << "|  xxxx           xxxx             xxxx  |" << endl;
    cout << "|   xx             xx               xx   |" << endl;
    cout << "|          xx              xx            |" << endl;
    cout << "|         xxxx            xxxx           |" << endl;
    cout << "|          xx              xx            |" << endl;
    cout << "|                                        |" << endl;
    cout << "|                                        |" << endl;
    cout << "------------------------------------------" << endl;

    cout << "\n \n ================= Morning After the Battle ================= \n \n";

    // Have them fight here and then reprint map

    return 0;
}