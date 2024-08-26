#include "Artillery.h"

Artillery::Artillery(int health, int damage, int defence, int amount, int ms): LegionUnit(health, damage, defence, amount, ms) {
    // Inherited
}

void Artillery::reportingForDuty() {
    this->strategy->getType();
    if(this->strategy->getType() == "Fortification"){
        cout << this->legionName << " reporting for duty. Fortification sounds like a great plan, sir!" << endl;
    }

    else if(this->strategy->getType() == "Ambush"){
        cout << "Sir, we think the infantry squad would be best for this job, sir!" << endl;
    }

    else if(this->strategy->getType() == "Flanking"){
        cout << "Sir, we think the cavalry squad would be best for this job, sir!" << endl;
    }
}
