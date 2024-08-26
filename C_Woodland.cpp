#include "C_Woodland.h"

C_Woodland::C_Woodland(int health, int damage, int defence, int amount, int ms, string unitName) : Cavalry(health, damage, defence,
                                                                                          amount, ms, unitName) {
    // Inherited
}

void C_Woodland::move() {
    cout << this->legionName << " is moving through a woodland." << endl;
}

void C_Woodland::attack() {
    cout << this->legionName << " is attacking in a woodland." << endl;
}

Cavalry *C_Woodland::clone() {
    return new C_Woodland(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS(), this->getLegionName());
}