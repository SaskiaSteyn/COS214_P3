#include "Legion.h"

Legion::Legion() {

}

void Legion::move() {
    cout << this->getUnitName() << " legion is moving." << endl;
    cout << "Executing order MOVE for all sub-legions: " << endl;

    for (int i = 0; i < this->unitComponent.size(); i++) {
        if (this->unitComponent[i] != nullptr) {
            this->unitComponent[i]->move();
        }
    }

}

void Legion::attack() {
    cout << this->getUnitName() << " is attacking." << endl;

    cout << "Executing order ATTACK for all sub-legions: " << endl;

    for (int i = 0; i < this->unitComponent.size(); i++) {
        if (this->unitComponent[i] != nullptr) {
            this->unitComponent[i]->attack();
        }
    }
}

bool Legion::add(UnitComponent *component) {
    this->unitComponent.push_back(component);
    return true;
}

bool Legion::remove(UnitComponent *component) {
    for (int i = 0; i < this->unitComponent.size(); i++) {
        if (this->unitComponent[i] == component) {
            this->unitComponent.erase(this->unitComponent.begin() + i);
            return true;
        }
    }

    return false;
}


