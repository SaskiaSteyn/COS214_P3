#include "LegionUnit.h"

LegionUnit::LegionUnit(int health, int damage, int defence, int amount, int ms, string unitName) {
    this->health = health;
    this->damage = damage;
    this->defence = defence;
    this->amount = amount;
    this->ms = ms;
    this->legionName = unitName;
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

void LegionUnit::setLegionName(string name) {
    this->legionName = name;
}

string LegionUnit::getLegionName() {
    return this->legionName;
}
