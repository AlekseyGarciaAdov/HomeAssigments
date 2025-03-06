#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
public:
    Weapon(const std::string& name);
    std::string getName() const;
    void setName(const std::string& name);

private:
    std::string name;
};

#endif // WEAPON_H