#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"

class HumanA {

public:

    std::string   name;
    Weapon        weapon;

    HumanA( std::string name, Weapon club );
    ~HumanA();

    void  attack();

};

#endif
