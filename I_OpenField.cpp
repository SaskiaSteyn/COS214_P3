#include "I_OpenField.h"

I_OpenField::I_OpenField(int health, int damage, int defence, int amount, int ms, string unitName) : Infantry(health, damage, defence, amount, ms, unitName) {
    // Inherited
}

void I_OpenField::move() {
    cout << this->legionName << " is moving through an open field." << endl;
}

void I_OpenField::attack() {
    cout << this->legionName << " is attacking in an open field." << endl;
}

Infantry *I_OpenField::clone() {
    return new I_OpenField(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS(), this->getLegionName());
}
