#include "Legion.h"

void Legion::move() {
    cout << this->getUnitName() << " legion is moving." << endl;
}

void Legion::attack() {
    cout << this->getUnitName() << " is attacking." << endl;
}

bool Legion::add(UnitComponent *component) {
    this->unitComponent.push_back(component);
    return true;
}

bool Legion::remove(UnitComponent *component) {
    auto it = std::find(this->unitComponent.begin(), this->unitComponent.end(), component);

    if (it != this->unitComponent.end()) {
        this->unitComponent.erase(it);
        return true;
    }
    else{
        return false;
    }
}


