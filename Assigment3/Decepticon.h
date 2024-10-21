#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon(const std::string& name, int power, int speed, bool stealthMode);
    
    std::string Transform() const override;

    bool IsStealthMode() const;
    void SetStealthMode(bool stealthMode);

private:
    bool stealthMode_;
};

#endif
