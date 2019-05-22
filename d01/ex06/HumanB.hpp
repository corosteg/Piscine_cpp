#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB {

public:

    std::string   name;
    Weapon*       weapon;

    HumanB( std::string name );
    ~HumanB();

    void  setWeapon( Weapon new_weapon );
    void  attack();

};

#endif
