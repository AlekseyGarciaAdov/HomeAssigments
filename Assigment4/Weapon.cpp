#include "Weapon.h"

Weapon::Weapon(const std::string& name) : name(name) {}

std::string Weapon::getName() const {
    return name;
}

void Weapon::setName(const std::string& name) {
    this->name = name;
}