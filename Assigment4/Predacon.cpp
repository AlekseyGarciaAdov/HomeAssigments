/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment4"*/
#include "Predacon.h"
#include <iostream>
Predacon::Predacon(int lvl, int str, int am, int fuelCapacity, Weapon* wpn, int en)
   : Transformer(lvl, str, am, fuelCapacity, wpn), energy(en) {}
int Predacon::getEnergy() const { return energy; }
void Predacon::setEnergy(int en) { energy = en; }
void Predacon::hunt() {
   std::cout << "Predacon is hunting" << '\n';
}
void Predacon::transform() {
   std::cout << "Predacon is transforming" << '\n';
}
std::ostream& operator<<(std::ostream& os, const Predacon& predacon) {
   os << static_cast<const Transformer&>(predacon) << ", Energy: " << predacon.energy;
   return os;
}
