#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon club ) : name(name), weapon(club)
{}

HumanA::~HumanA()
{}

void  HumanA::attack() {
  std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
