#include "Infantry.h"

Infantry::Infantry(int health, int damage, int defence, int amount, int ms, string unitName): LegionUnit(health, damage, defence, amount,
                                                                                        ms, unitName) {
    // Inherited
}

void Infantry::reportingForDuty() {
    this->strategy->getType();
    if(this->strategy->getType() == "Ambush"){
        cout << this->legionName << " reporting for duty. Ambushing sounds like a great plan, sir!" << endl;
    }

    else if(this->strategy->getType() == "Flanking"){
        cout << "Sir, we think the cavalry squad would be best for this job, sir!" << endl;
    }

    else if(this->strategy->getType() == "Fortification"){
        cout << "Sir, we think the artillery squad would be best for this job, sir!" << endl;
    }
}

bool Infantry::add(UnitComponent *component) {
    this->unitComponent.push_back(component);
    return true;
}

bool Infantry::remove(UnitComponent *component) {
    for (int i = 0; i < this->unitComponent.size(); i++) {
        if (this->unitComponent[i] == component) {
            this->unitComponent.erase(this->unitComponent.begin() + i);
            return true;
        }
    }

    return false;
}
