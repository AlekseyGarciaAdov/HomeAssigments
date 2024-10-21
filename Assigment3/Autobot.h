#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(const std::string& name, int power, int speed, const std::string& vehicleType);
    
    std::string Transform() const override;

    std::string GetVehicleType() const;
    void SetVehicleType(const std::string& vehicleType);

private:
    std::string vehicleType_;
};

#endif
