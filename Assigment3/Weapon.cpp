/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment3"*/

#include "Weapon.h"

Weapon::Weapon(int dmg) : damage(dmg){}

int Weapon::getDamage() const {
    return damage;
}
