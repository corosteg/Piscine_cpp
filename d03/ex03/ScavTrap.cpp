/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 22:05:36 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/23 22:06:06 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    this->_job = "Guardian of Door";
    std::cout << "Default constructor of ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    this->_job = "Guardian of Door";
    std::cout << "Constructor of ScavTrap is called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "Destructor of ScavTrap is called" << std::endl;
}

ScavTrap &      ScavTrap::operator=( const ScavTrap & rhs ) {
    this->_name = rhs.getName();
    return *this;
}

void            ScavTrap::challengeNewcomer() {
    std::string challengeStr[] = {
        "\"Give me the moon\"",
        "\"Give something nobody give me before\"",
        "\"Eat one of your leg\"",
        "\"Run 42 miles\"",
        "\"Walk 42 miles\"",
    };
    srand(time(NULL));
    std::cout << this->_name << " give you a chellenge: " << challengeStr[ rand() % 5 ] << std::endl;
}

std::ostream &  operator<<( std::ostream & o, ScavTrap const & i ) {
    o << i.getName() << " STRUCT" << std::endl << "[" << std::endl;
    o << "Hit points => " << i.getHitPoints() << std::endl;
    o << "Armor => " << i.getArmor() << std::endl;
    o << "]" << std::endl;

    return o;
}
