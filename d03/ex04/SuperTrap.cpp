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

SuperTrap::SuperTrap(void) : NinjaTrap(), FragTrap(), ClapTrap()
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    std::cout << "Default constructor of SuperTrap is called" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name), ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;
    std::cout << "Constructor of SuperTrap is called" << std::endl;
}

SuperTrap::SuperTrap( SuperTrap const & src )
{
    *this = src;

    return;
}

SuperTrap::~SuperTrap()
{
    std::cout << "Destructor of SuperTrap is called" << std::endl;
}

SuperTrap &      SuperTrap::operator=( SuperTrap const & rhs ) 
{
    return *this;
}

void            SuperTrap::rangedAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( SOLDIER ) " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void            SuperTrap::meleeAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( Fucking Ninja!! ) "  << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}
