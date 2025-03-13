#ifndef TRANSFORMER_H
#define TRANSFORMER_H

class Transformer {
	public:
		virtual void transform() {std::cout<<"Transformer is transforming"<<std::endl;}
		virtual void ulta() {std::cout<<"Transformer is in ulta mode"<<std::endl;}
		virtual void openFier() {std::cout<<"Transformer open fier"<<std::endl;}
};

#endif
