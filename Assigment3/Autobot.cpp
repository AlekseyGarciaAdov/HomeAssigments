#include "Autobot.h"
#include <iostream>

Autobot::Autobot(const std::string& name, int strength, int speed, const Weapon& weapon, const Engine& engine, int courage, int honor)
    : Transformer(name, strength, speed, weapon, engine), courage(courage), honor(honor) {}

int Autobot::getCourage() const {
    return courage;
}

void Autobot::setCourage(int courage) {
    this->courage = courage;
}

int Autobot::getHonor() const {
    return honor;
}

void Autobot::setHonor(int honor) {
    this->honor = honor;
}

void Autobot::protect() {
    std::cout << name << " is protecting the innocent!" << std::endl;
}
