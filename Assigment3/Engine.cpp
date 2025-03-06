#include "Engine.h"

Engine::Engine(const std::string& mode) : mode(mode) {}

std::string Engine::getMode() const {
    return mode;
}

void Engine::setMode(const std::string& mode) {
    this->mode = mode;
}   