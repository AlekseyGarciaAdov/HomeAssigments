

#include <iostream>
#include "Autobot.h"
#include "Decepticon.h"
#include "VehicleTransformer.h"

int main() {
    Autobot optimus("Optimus Prime", 1000, 60, "Truck");
    Decepticon megatron("Megatron", 1200, 70, true);
    
    VehicleTransformer car("Car", 300, 80);

    std::cout << optimus.GetName() << ": " << optimus.Transform() << "\n";
    std::cout << megatron.GetName() << ": " << megatron.Transform() << "\n";
    std::cout << car.GetName() << ": " << car.Transform() << "\n";

    return 0;
}
