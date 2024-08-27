#include "Artillery.h"

Artillery::Artillery(int health, int damage, int defence, int amount, int ms, string unitName) : LegionUnit(health, damage, defence,
                                                                                                            amount, ms, unitName) {
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

bool Artillery::add(UnitComponent *component) {
    this->unitComponent.push_back(component);
    return true;
}

bool Artillery::remove(UnitComponent *component) {
    for (int i = 0; i < this->unitComponent.size(); i++) {
        if (this->unitComponent[i] == component) {
            this->unitComponent.erase(this->unitComponent.begin() + i);
            return true;
        }
    }

    return false;
}
