#ifndef VEHICLE_TRANSFORMER_H
#define VEHICLE_TRANSFORMER_H

#include "Transformer.h"

class VehicleTransformer : public Transformer {
public:
    VehicleTransformer(const std::string& name, int power, int speed);

    std::string Transform() const override;

private:
};

#endif
