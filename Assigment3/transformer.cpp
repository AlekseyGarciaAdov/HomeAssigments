/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment3"*/

#include "transformer.h"
#include "Weapon.h"
#include <iostream>

Transformer::Transformer(int lvl, int str, int fl, int am, Weapon* wpn) 
	: level(lvl),strength(str),ammo(am),weapon(wpn),fuelTank(fl) {}

Transformer::~Transformer() {}

int Transformer::getLevel() const { return level;}
int Transformer::getStrength() const { return strength; }
int Transformer::getFuel() const {return fuelTank.getFuelAmount();}
int Transformer::getAmmo() const {return ammo;}

void Transformer::move(){ 
	if(fuelTank.getFuelAmount() >0) {
		fuelTank.consume();
	}
}
void Transformer::fire(){
	if (ammo>0) {
		ammo--;
		fuelTank.consume();
	}
}
void Transformer::transform(){
	std::cout<< "Transformer is transforming" << '\n';
}
