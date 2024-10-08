#include "Cavalry.h"

Cavalry::Cavalry(int health, int damage, int defence, int amount, int ms, string unitName): LegionUnit(health, damage, defence, amount,
                                                                                      ms, unitName) {
    // Inherited
}

void Cavalry::reportingForDuty() {
    this->strategy->getType();
    if(this->strategy->getType() == "Flanking"){
        cout << this->legionName << " reporting for duty. Flanking sounds like a great plan, sir!" << endl;
    }

    else if(this->strategy->getType() == "Ambush"){
        cout << "Sir, we think the infantry squad would be best for this job, sir!" << endl;
    }

    else if(this->strategy->getType() == "Fortification"){
        cout << "Sir, we think the artillery squad would be best for this job, sir!" << endl;
    }
}

bool Cavalry::add(UnitComponent *component) {
    this->unitComponent.push_back(component);
    return true;
}

bool Cavalry::remove(UnitComponent *component) {
    for (int i = 0; i < this->unitComponent.size(); i++) {
        if (this->unitComponent[i] == component) {
            this->unitComponent.erase(this->unitComponent.begin() + i);
            return true;
        }
    }

    return false;
}
