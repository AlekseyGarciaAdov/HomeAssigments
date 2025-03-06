#include "Decepticon.h"
#include <iostream>

Decepticon::Decepticon(const std::string& name, int strength, int speed, const Weapon& weapon, const Engine& engine, int cunning, int malice)
    : Transformer(name, strength, speed, weapon, engine), cunning(cunning), malice(malice) {}

int Decepticon::getCunning() const {
    return cunning;
}

void Decepticon::setCunning(int cunning) {
    this->cunning = cunning;
}

int Decepticon::getMalice() const {
    return malice;
}

void Decepticon::setMalice(int malice) {
    this->malice = malice;
}

void Decepticon::deceive() {
    std::cout << name << " is deceiving the enemy!" << std::endl;
}