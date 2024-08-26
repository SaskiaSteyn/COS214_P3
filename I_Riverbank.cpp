#include "I_Riverbank.h"

I_Riverbank::I_Riverbank(int health, int damage, int defence, int amount, int ms) : Infantry(health, damage, defence, amount, ms) {

}

void I_Riverbank::move() {
    cout << this->legionName << " is moving along the riverbank." << endl;
}

void I_Riverbank::attack() {
    cout << this->legionName << " is attacking on a riverbank." << endl;
}

LegionUnit *I_Riverbank::clone() {
    return new I_Riverbank(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS());
}