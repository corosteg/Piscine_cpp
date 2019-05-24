/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:47:35 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/23 17:51:37 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
    this->_name = "unknown";
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_job = "Soldier";
    std::cout << "Default constructor of FragTrap is called" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 100;
    this->_maxEnergyPoints = 100;
    this->_level = 1;
    this->_meleeAttackDamage = 30;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    this->_job = "Soldier";
    std::cout << "Constructor of FragTrap is called" << std::endl;
}

FragTrap::~FragTrap( void ) {
    std::cout << "Destructor of FragTrap is called" << std::endl;
}

FragTrap &      FragTrap::operator=( const FragTrap & rhs ) {
    this->_name = rhs.getName();
    return *this;
}

void            FragTrap::vaulthunter_dot_exe(std::string const & target) {
    std::string attacksStr[] = {
        "Pinch Attack",
        "Tickles Attack", 
        "Scratch Attack",
        "High Kick Attack",
        "Violent Uppercut Attack"
    };
    srand(time(NULL));
    if (this->_energyPoints - 25 >= 0)
    {
        std::cout << this->_name << " use " << attacksStr[ rand() % 5 ] << " on " << target << std::endl;
        this->_energyPoints -= 25;
        std::cout << this->_energyPoints << std::endl;
    }
    else
        std::cout << "it’s out of energy" << std::endl;
}

std::ostream &  operator<<( std::ostream & o, FragTrap const & i ) {
    o << i.getName() << " STRUCT" << std::endl << "[" << std::endl;
    o << "Hit points => " << i.getHitPoints() << std::endl;
    o << "Armor => " << i.getArmor() << std::endl;
    o << "]" << std::endl;

    return o;
}
