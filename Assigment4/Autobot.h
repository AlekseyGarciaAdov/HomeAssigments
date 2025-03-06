#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
public:
    Autobot(const std::string& name, int strength, int speed, const Weapon& weapon, const Engine& engine, int courage, int honor);
    int getCourage() const;
    void setCourage(int courage);
    int getHonor() const;
    void setHonor(int honor);
    void protect();
private:
    int courage;
    int honor;
};

#endif // AUTOBOT_H
