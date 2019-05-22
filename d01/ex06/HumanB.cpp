#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name)
{}

HumanB::~HumanB()
{}

void  HumanB::attack() {
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void  HumanB::setWeapon( Weapon new_weapon ) {
    this->weapon = &new_weapon;
}
