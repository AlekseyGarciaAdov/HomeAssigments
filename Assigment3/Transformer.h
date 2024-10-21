#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>

class Transformer {
public:
    Transformer(const std::string& name, int power, int speed);
    virtual ~Transformer();

    std::string GetName() const;
    void SetName(const std::string& name);

    int GetPower() const;
    void SetPower(int power);

    int GetSpeed() const;
    void SetSpeed(int speed);

    virtual std::string Transform() const = 0;

protected:
    std::string name_;
    int power_;
    int speed_;
};

#endif
