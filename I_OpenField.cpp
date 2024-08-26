#include "I_OpenField.h"

I_OpenField::I_OpenField(int health, int damage, int defence, int amount, int ms) : Infantry(health, damage, defence, amount, ms) {
    // Inherited
}

void I_OpenField::move() {
    cout << this->legionName << " is moving through an open field." << endl;
}

void I_OpenField::attack() {
    cout << this->legionName << " is attacking in an open field." << endl;
}

LegionUnit *I_OpenField::clone() {
    return new I_OpenField(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS());
}

bool I_OpenField::add(UnitComponent *component) {
    return false;
}

bool I_OpenField::remove(UnitComponent *component) {
    return false;
}
