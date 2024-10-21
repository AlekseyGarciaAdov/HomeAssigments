

#include "Decepticon.h"

Decepticon::Decepticon(const std::string& name, int power, int speed, bool stealthMode)
    : Transformer(name, power, speed), stealthMode_(stealthMode) {}

std::string Decepticon::Transform() const {
    return "Transforming into Decepticon mode!";
}

bool Decepticon::IsStealthMode() const {
    return stealthMode_;
}

void Decepticon::SetStealthMode(bool stealthMode) {
    stealthMode_ = stealthMode;
}
