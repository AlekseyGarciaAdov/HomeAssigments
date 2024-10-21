

#include "Transformer.h"

Transformer::Transformer(const std::string& name, int power, int speed)
    : name_(name), power_(power), speed_(speed) {}

Transformer::~Transformer() {}

std::string Transformer::GetName() const {
    return name_;
}

void Transformer::SetName(const std::string& name) {
    name_ = name;
}

int Transformer::GetPower() const {
    return power_;
}

void Transformer::SetPower(int power) {
    power_ = power;
}

int Transformer::GetSpeed() const {
    return speed_;
}

void Transformer::SetSpeed(int speed) {
    speed_ = speed;
}
