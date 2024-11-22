/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment4"*/
#ifndef PREDACON_H
#define PREDACON_H
#include "transformer.h"
class Predacon : public Transformer {
private:
   int energy;
public:
   Predacon(int lvl = 1, int str = 10, int am = 5, int fuelCapacity = 100, Weapon* wpn = nullptr, int en = 50);
   int getEnergy() const;
   void setEnergy(int en);
   void hunt();
   void transform() override;
   friend std::ostream& operator<<(std::ostream& os, const Predacon& predacon);
};
#endif
