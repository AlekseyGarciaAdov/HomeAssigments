/* Garcia Adov Aleksey    st135738@student.spbu.ru     "Assigment5"*/

#include "Autobot.h"

Autobot::Autobot() : Transformers()
{

    grenade_count=0;
    is_having_pocket_knife= 0;
}
Autobot::Autobot(Fraction good = Transformers::Fraction::DECEPTICON,std::string clicku = "NULL",std::string job="NULL",
                   int place = -1,uint t_height = 1,
                   std::unique_ptr<Association> s_gun = std::make_unique<Association>("NULL"),uint i_grenades_count = 0,bool i_is_knife_on = 0) :
    Transformers(good,clicku,job, place,t_height,std::move(s_gun) )
{

    grenade_count=i_grenades_count;
    is_having_pocket_knife=is_having_pocket_knife;
}
uint Autobot::get_num_grenades() const
{
    //std::cout<<grenade_count<<std::endl;
    return grenade_count;
}

void Autobot::set_num_grenades(uint new_grenades)
{
    grenade_count = new_grenades;
}

bool Autobot::get_is_knife_on() const
{
    //std::cout<<is_having_pocket_knife<<std::endl;
    return is_having_pocket_knife;
}

void Autobot::set_is_knife_on(bool knife)
{
    is_having_pocket_knife = knife;
}
uint Autobot::doubeling_grenades()
{
    grenade_count*=2;
    return grenade_count;
}
