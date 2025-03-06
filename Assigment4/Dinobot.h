#ifndef DINOBOT_H
#define DINOBOT_H

#include "Transformer.h"

class Dinobot : public Transformer {
public:
    Dinobot(const std::string& name, int strength, int speed, const Weapon& weapon, const Engine& engine, int ferocity, int roarLevel);
    int getFerocity() const;
    void setFerocity(int ferocity);
    int getRoarLevel() const;
    void setRoarLevel(int roarLevel);
    void roar();
private:
    int ferocity;
    int roarLevel;
};

#endif // DINOBOT_H