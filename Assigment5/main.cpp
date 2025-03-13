#include <iostream>
#include <vector>
#include <memory>

#include "Transformer.h"
#include "Decepticon.h"
#include "Autobot.h"

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
