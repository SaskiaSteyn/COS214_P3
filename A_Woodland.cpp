#include "A_Woodland.h"

A_Woodland::A_Woodland(int health, int damage, int defence, int amount, int ms) : Artillery(health, damage, defence, amount, ms) {
    // Inherited
}

void A_Woodland::move() {
    cout << this->legionName << " is moving through a woodland." << endl;

}

void A_Woodland::attack() {
    cout << this->legionName << " is attacking in a woodland." << endl;
}

LegionUnit *A_Woodland::clone() {
    return new A_Woodland(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS());
}

bool A_Woodland::add(UnitComponent *component) {
    return false;
}

bool A_Woodland::remove(UnitComponent *component) {
    return false;
}
