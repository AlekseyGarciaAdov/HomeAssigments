#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "Transformer.h"

class Decepticon : public Transformer {
public:
    Decepticon(const std::string& name, int strength, int speed, const Weapon& weapon, const Engine& engine, int cunning, int malice);
    int getCunning() const;
    void setCunning(int cunning);
    int getMalice() const;
    void setMalice(int malice);
    void deceive();
private:
    int cunning;
    int malice;
};

#endif // DECEPTICON_H