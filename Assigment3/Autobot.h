/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment3"*/
#ifndef AUTOBOT_HPP
#define AUTOBOT_HPP

#include "transformer.hpp"

class Autobot: public Transformer { //heir 
private:
	int repairPower;//field
public:
	Autobot(int lvl,int str,int fl,int am,Weapon* wpn,int repair); //constructor
	
	// functions
	void repair();
	void transform() override;// redifine from class Transformer
};
#endif









