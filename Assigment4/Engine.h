#ifndef ENGINE_H
#define ENGINE_H

#include <string>

class Engine {
public:
    Engine(const std::string& mode);
    std::string getMode() const;
    void setMode(const std::string& mode);

private:
    std::string mode;
};

#endif // ENGINE_H