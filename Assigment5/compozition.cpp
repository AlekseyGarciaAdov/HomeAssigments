/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment5"*/

#include "compozition.h"

compozition::compozition()
{
    lenght = 0;
}

compozition::compozition(uint height )
{
    lenght = height;
}
compozition::~compozition()
{

    //std::cout<<"Co_Destructed"<<std::endl;

}
uint compozition::get_lenght() const
{
    return lenght;
}
void compozition::set_lenght(uint i_lenght)
{
    lenght = i_lenght;
}

