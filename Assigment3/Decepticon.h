/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment3"*/
#ifndef DECEPTICON_HPP
#define DECEPTICON_HPP

#include "transformer.hpp"

class Decepticon : public Transformer { //heir
private:
    bool canFly;
public:
    Decepticon(int lvl, int str, int fl, int am, Weapon* wpn, bool fly);

      bool getCanFly() const;
      void setCanFly(bool fly);
      
      void sabotage();
      void transform() override;// redefine from class Transformer
};

#endif

