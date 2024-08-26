#include "A_Riverbank.h"

A_Riverbank::A_Riverbank(int health, int damage, int defence, int amount, int ms, string unitName) : Artillery(health, damage, defence,
                                                                                              amount, ms,
                                                                                              unitName) {
    // Inherited
}

void A_Riverbank::move() {
    cout << this->legionName << " is moving along the riverbank." << endl;

}

void A_Riverbank::attack() {
    cout << this->legionName << " is attacking on a riverbank." << endl;
}

Artillery *A_Riverbank::clone() {
    return new A_Riverbank(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS(), this->getLegionName());
}