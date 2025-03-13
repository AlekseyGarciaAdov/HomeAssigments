#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
	public:
		void transform() override {std::cout<<"Decepticon is transforming"<<std::endl;}
		void ulta() override {std::cout<<"Decepticon is in ulta mode"<<std::endl;}
		void openFier() override {std::cout<<"Decepticon open fier"<<std::endl;}
};

#endif
