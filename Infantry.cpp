#include "Infantry.h"

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
