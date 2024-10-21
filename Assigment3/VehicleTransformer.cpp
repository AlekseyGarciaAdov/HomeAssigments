

#include "VehicleTransformer.h"

VehicleTransformer::VehicleTransformer(const std::string& name, int power, int speed)
    : Transformer(name, power, speed) {}

std::string VehicleTransformer::Transform() const {
    return "Transforming into a vehicle!";
}
