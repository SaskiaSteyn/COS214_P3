#include "Cavalry.h"

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
