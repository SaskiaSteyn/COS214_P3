#include "A_OpenField.h"

A_OpenField::A_OpenField(int health, int damage, int defence, int amount, int ms, string unitName) : Artillery(health,
                                                                                                               damage,
                                                                                                               defence,
                                                                                                               amount,
                                                                                                               ms,
                                                                                                               unitName) {

}

void A_OpenField::move() {
    cout << this->legionName << " is moving through an open field." << endl;

}

void A_OpenField::attack() {
    cout << this->legionName << " is attacking in an open field" << endl;
}

Artillery *A_OpenField::clone() {
    return new A_OpenField(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS(), this->getLegionName());
}


