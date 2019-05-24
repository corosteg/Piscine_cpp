/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 01:48:35 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 01:48:36 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
    // this->_name = "unknown";
    // this->_hitPoints = 60;
    // this->_maxHitPoints = 60;
    // this->_energyPoints = 120;
    // this->_maxEnergyPoints = 120;
    // this->_level = 1;
    // this->_meleeAttackDamage = 60;
    // this->_rangedAttackDamage = 5;
    // this->_armorDamageReduction = 0;
    // this->_job = ;
    std::cout << "Default constructor of SuperTrap is called" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name)
{
    FragTrap::_hitPoints;
    // this->_maxHitPoints = 60;
    // this->_energyPoints = 120;
    // this->_maxEnergyPoints = 120;
    // this->_level = 1;
    // this->_meleeAttackDamage = 60;
    // this->_rangedAttackDamage = 5;
    // this->_armorDamageReduction = 0;
    // this->_job = "Fucking Ninja!!";
    std::cout << "Constructor of SuperTrap is called" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "Destructor of SuperTrap is called" << std::endl;
}

SuperTrap &      SuperTrap::operator=( SuperTrap const & rhs ) {
    return *this;
}
