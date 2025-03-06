#include <iostream>
#include <vector>
#include <memory>

class Transformer {
	public:
		virtual void transform() {std::cout<<"Transformer is transforming"<<std::endl;}
		virtual void ulta() {std::cout<<"Transformer is in ulta mode"<<std::endl;}
		virtual void openFier() {std::cout<<"Transformer open fier"<<std::endl;}
};

class Decepticon : public Transformer {
	public:
		void transform() override {std::cout<<"Decepticon is transforming"<<std::endl;}
		void ulta() override {std::cout<<"Decepticon is in ulta mode"<<std::endl;}
		void openFier() override {std::cout<<"Decepticon open fier"<<std::endl;}
};

class Autobot : public Transformer {
	public:
		void transform() override {std::cout<<"Autobot is transforming"<<std::endl;}
		void ulta() override {std::cout<<"Autobot is in ulta mode"<<std::endl;}
		void openFier() override {std::cout<<"Autobot open fier"<<std::endl;}
};

int main() {
	Transformer tr;
	Decepticon dc;
	Autobot ab;

	std::vector<std::unique_ptr<Transformer>> objects;
    	for (size_t i = 0; i < 9; i++){
        if (i < 3) { objects.push_back(std::make_unique<Decepticon>()); }
        if (i > 3 && i < 6) { objects.push_back(std::make_unique<Autobot>()); }
        if (i > 6) { objects.push_back(std::make_unique<Transformer>()); }
	}
	for (size_t i = 0; i < objects.size(); i++) { objects[i].get()->ulta(); }

	return 0;
}
