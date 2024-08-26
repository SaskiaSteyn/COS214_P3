#include "Artillery.h"

Artillery::Artillery(): LegionUnit() {
    this->health = 100;
    this->damage = 150;
    this->defence = 0;
    this->amount = 0;
    this->ms = 0;
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
