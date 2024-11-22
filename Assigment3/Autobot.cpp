/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment3"*/
#include "Autobot.h"
#include <iostream>

Autobot::Autobot(int lvl,int str,int fl,int am, Weapon* wpn,int repair) 
	: Transformer(lvl,str,fl,am,wpn),repairPower(repair){}

void Autobot::repair(){
	std::cout << "Repairing with power: " << repairPower << '\n';
}

void Autobot::transform(){
	std::cout<< "Autobot is trnasforming" << '\n';
}











