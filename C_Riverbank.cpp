#include "C_Riverbank.h"

C_Riverbank::C_Riverbank(int health, int damage, int defence, int amount, int ms, string unitName) : Cavalry(health, damage, defence,
                                                                                            amount, ms, unitName) {
    // Inherited
}

void C_Riverbank::move() {
    cout << this->legionName << " is moving along a riverbank." << endl;
}

void C_Riverbank::attack() {
    cout << this->legionName << " is attacking on a riverbank." << endl;
}

Cavalry *C_Riverbank::clone() {
    return new C_Riverbank(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS(), this->getLegionName());
}
