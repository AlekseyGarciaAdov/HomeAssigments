

#include "Weapon.h"

Weapon::Weapon(int dmg) : damage(dmg){}

int Weapon::getDamage() const {
    return damage;
}
