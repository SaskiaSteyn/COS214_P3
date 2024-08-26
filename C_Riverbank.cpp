#include "C_Riverbank.h"

C_Riverbank::C_Riverbank(int health, int damage, int defence, int amount, int ms) : Cavalry(health, damage, defence, amount, ms) {
    // Inherited
}

void C_Riverbank::move() {
    cout << this->legionName << " is moving along a riverbank." << endl;
}

void C_Riverbank::attack() {
    cout << this->legionName << " is attacking on a riverbank." << endl;
}

LegionUnit *C_Riverbank::clone() {
    return new C_Riverbank(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS());
}
