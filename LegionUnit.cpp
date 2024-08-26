#include "LegionUnit.h"

LegionUnit::LegionUnit(int health, int damage, int defence, int amount, int ms) {
    this->health = health;
    this->damage = damage;
    this->defence = defence;
    this->amount = amount;
    this->ms = ms;
}

BattleStrategy *LegionUnit::getStrategy() {
    return this->strategy;
}

void LegionUnit::setStrategy(BattleStrategy * battleStrategy) {
    this->strategy = battleStrategy;
}

int LegionUnit::getHealth() {
    return this->health;
}

int LegionUnit::getDamage() {
    return this->damage;
}

int LegionUnit::getDefence() {
    return this->defence;
}

int LegionUnit::getAmount() {
    return this->amount;
}

int LegionUnit::getMS() {
    return this->ms;
}
