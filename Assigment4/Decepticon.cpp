/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment4"*/
#include "Decepticon.h"
#include <iostream>
Decepticon::Decepticon(int lvl, int str, int am, int fuelCapacity, Weapon* wpn, bool fly)
   : Transformer(lvl, str, am, fuelCapacity, wpn), canFly(fly) {}
bool Decepticon::getCanFly() const { return canFly; }
void Decepticon::setCanFly(bool fly) { canFly = fly; }
void Decepticon::sabotage() {
   std::cout << "Sabotaging Autobots" << '\n';
}
void Decepticon::transform() {
   std::cout << "Decepticon is transforming" << '\n';
}
std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon) {
   os << static_cast<const Transformer&>(decepticon) << ", Can Fly: " << (decepticon.canFly ? "Yes" : "No");
   return os;
}
