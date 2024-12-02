/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment5"*/

#include "Association.h"

Association::Association()
{
    type_gun="NULL";
}


Association::Association(std::string temp_gun)
{
    type_gun=temp_gun;
}

Association::~Association()
{
    //std::cout<<"As_Destoroyed"<<std::endl;
}

std::string Association::get_tgun() const
{
    return type_gun;
}

void Association::set_tgun(std::string temp_gun_2)
{
    type_gun=temp_gun_2;
}
