#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer {
	public:
		void transform() override {std::cout<<"Autobot is transforming"<<std::endl;}
		void ulta() override {std::cout<<"Autobot is in ulta mode"<<std::endl;}
		void openFier() override {std::cout<<"Autobot open fier"<<std::endl;}
};

#endif
