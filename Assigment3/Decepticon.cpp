/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment3"*/
#include "Decepticon.h"
#include <iostream>

Decepticon::Decepticon(int lvl, int str, int fl, int am , Weapon* wpn, bool fly) 
	: Transformer(lvl, str, fl, am, wpn), canFly(fly) {}
    
bool Decepticon::getCanFly() const{
     return canFly;
}

void Decepticon::setCanFly(bool fly){
     canFly = fly;
}

void Decepticon::sabotage(){
    std::cout << "Sabotaging autobots" << '\n';
}

void Decepticon::transform(){
   std::cout<< "Decepticon is transforming" << '\n';
}