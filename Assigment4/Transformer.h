#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "Weapon.h"
#include "Engine.h"
#include <iostream>

class Transformer {
public:
    Transformer(const std::string& name, int strength, int speed, const Weapon& weapon, const Engine& engine);
    Transformer(const std::string& name); // Перегрузка конструктора
    ~Transformer();

    std::string getName() const;
    void setName(const std::string& name);

    int getStrength() const;
    void setStrength(int strength);

    int getSpeed() const;
    void setSpeed(int speed);

    Weapon getWeapon() const;
    void setWeapon(const Weapon& weapon);

    Engine getEngine() const;
    void setEngine(const Engine& engine);

    virtual void transform();
    virtual void attack();

    // Операторы сравнения
    bool operator>(const Transformer& other) const; // Оператор "сильнее"
    bool operator<(const Transformer& other) const; // Оператор "слабее"

    friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);

protected:
    std::string name;
    int strength;
    int speed;
    Weapon weapon;  // Композиция
    Engine* engine; // Ассоциация
};

#endif // TRANSFORMER_H