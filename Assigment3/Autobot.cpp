

#include "Autobot.h"

Autobot::Autobot(const std::string& name, int power, int speed, const std::string& vehicleType)
    : Transformer(name, power, speed), vehicleType_(vehicleType) {}

std::string Autobot::Transform() const {
    return "Transforming into Autobot vehicle!";
}

std::string Autobot::GetVehicleType() const {
    return vehicleType_;
}

void Autobot::SetVehicleType(const std::string& vehicleType) {
    vehicleType_ = vehicleType;
}
