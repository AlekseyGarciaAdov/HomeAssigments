/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment5"*/
#ifndef Compoz
#define Compoz

#include <iostream>
//for uint



class compozition
{
private:
    uint lenght;
public:
    compozition();
    compozition(uint);
    ~compozition();
    uint get_lenght() const;
    void set_lenght(uint i_lenght);
};


#endif
