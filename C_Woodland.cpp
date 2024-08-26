#include "C_Woodland.h"

C_Woodland::C_Woodland(int health, int damage, int defence, int amount, int ms) : Cavalry(health, damage, defence, amount, ms) {
    // Inherited
}

void C_Woodland::move() {
    cout << this->legionName << " is moving through a woodland." << endl;
}

void C_Woodland::attack() {
    cout << this->legionName << " is attacking in a woodland." << endl;
}

LegionUnit *C_Woodland::clone() {
    return new C_Woodland(this->getHealth(), this->getDamage(), this->getDefence(), this->getAmount(), this->getMS());
}

bool C_Woodland::add(UnitComponent *component) {
    return false;
}

bool C_Woodland::remove(UnitComponent *component) {
    return false;
}
