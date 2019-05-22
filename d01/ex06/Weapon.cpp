#include "Weapon.hpp"

Weapon::Weapon( std::string input ) : str(input), ref(str)
{}

Weapon::~Weapon()
{}

std::string&    Weapon::getType() {
    return this->ref;
}

void            Weapon::setType( std::string str ) {
    this->ref = str;
}
