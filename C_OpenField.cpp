#include "C_OpenField.h"

C_OpenField::C_OpenField(int health, int damage, int defence, int amount, int ms) : Cavalry(health, damage, defence, amount, ms) {
    // Inherited
}

void C_OpenField::move() {
    cout << this->legionName << " is moving through an open field." << endl;
}

void C_OpenField::attack() {
    cout << this->legionName << " is attacking in an open field." << endl;
}

LegionUnit *C_OpenField::clone() {
    return new C_OpenField(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS());
}