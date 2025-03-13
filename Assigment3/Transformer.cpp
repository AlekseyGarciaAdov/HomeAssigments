#include "Transformer.h"
#include <iostream>

Transformer::Transformer(const std::string& name, int strength, int speed, const Weapon& weapon, const Engine& engine)
    : name(name), strength(strength), speed(speed), weapon(weapon), engine(new Engine(engine)) {}

Transformer::Transformer(const std::string& name)
    : name(name), strength(0), speed(0), weapon("Default Weapon"), engine(new Engine("Default Engine")) {}

Transformer::~Transformer() {
    delete engine;
}

std::string Transformer::getName() const {
    return name;
}

void Transformer::setName(const std::string& name) {
    this->name = name;
}

int Transformer::getStrength() const {
    return strength;
}

void Transformer::setStrength(int strength) {
    this->strength = strength;
}

int Transformer::getSpeed() const {
    return speed;
}

void Transformer::setSpeed(int speed) {
    this->speed = speed;
}

Weapon Transformer::getWeapon() const {
    return weapon;
}

void Transformer::setWeapon(const Weapon& weapon) {
    this->weapon = weapon;
}

Engine Transformer::getEngine() const {
    return *engine;
}

void Transformer::setEngine(const Engine& engine) {
    *(this->engine) = engine;
}

void Transformer::transform() {
    std::cout << name << " is transforming!" << std::endl;
}

void Transformer::attack() {
    std::cout << name << " is attacking with " << weapon.getName() << "!" << std::endl;
}

bool Transformer::operator>(const Transformer& other) const {
    return this->strength > other.strength;
}

bool Transformer::operator<(const Transformer& other) const {
    return this->strength < other.strength;
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer) {
    os << "Transformer: " << transformer.name << ", Strength: " << transformer.strength
       << ", Speed: " << transformer.speed;
    return os;
}