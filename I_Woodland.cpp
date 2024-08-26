#include "I_Woodland.h"

I_Woodland::I_Woodland(int health, int damage, int defence, int amount, int ms) : Infantry(health, damage, defence, amount, ms) {
    // Inherited
}

void I_Woodland::move() {
    cout << this->legionName << " is moving through a woodland." << endl;
}

void I_Woodland::attack() {
    cout << this->legionName << " is attacking in a woodland." << endl;
}

LegionUnit *I_Woodland::clone() {
    return new I_Woodland(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS());
}
