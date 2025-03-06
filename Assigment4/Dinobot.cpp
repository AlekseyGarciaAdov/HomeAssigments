#include "Dinobot.h"
#include <iostream>

Dinobot::Dinobot(const std::string& name, int strength, int speed, const Weapon& weapon, const Engine& engine, int ferocity, int roarLevel)
    : Transformer(name, strength, speed, weapon, engine), ferocity(ferocity), roarLevel(roarLevel) {}

int Dinobot::getFerocity() const {
    return ferocity;
}

void Dinobot::setFerocity(int ferocity) {
    this->ferocity = ferocity;
}

int Dinobot::getRoarLevel() const {
    return roarLevel;
}

void Dinobot::setRoarLevel(int roarLevel) {
    this->roarLevel = roarLevel;
}

void Dinobot::roar() {
    std::cout << name << " is roaring with level " << roarLevel << "!" << std::endl;
}