/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 22:44:02 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/23 22:44:03 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
    : _name("unknown"),
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(100),
    _maxEnergyPoints(100),
    _level(1),
    _meleeAttackDamage(30),
    _rangedAttackDamage(20),
    _armorDamageReduction(5)
{
    std::cout << "Default constructor of ClapTrap is called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) 
    : _name(name),
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(100),
    _maxEnergyPoints(100),
    _level(1),
    _meleeAttackDamage(30),
    _rangedAttackDamage(20),
    _armorDamageReduction(5)
{
    std::cout << "Constructor of ClapTrap is called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor of ClapTrap is called" << std::endl;
}

ClapTrap &      ClapTrap::operator=( const ClapTrap & rhs ) {
    this->_name = rhs.getName();
    return *this;
}

std::string     ClapTrap::getName()  const {
    return this->_name;
}

int             ClapTrap::getHitPoints() const {
    return this->_hitPoints;
}

int             ClapTrap::getArmor() const {
    return this->_armorDamageReduction;
}

void            ClapTrap::rangedAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( " << this->_job << " ) " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void            ClapTrap::meleeAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void            ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " received " << amount << " damage " << std::endl;
    while(amount > 0)
    {
        if (this->_armorDamageReduction > 0)
            this->_armorDamageReduction--;
        else if (this->_hitPoints > 0)
            this->_hitPoints--;
        amount--;
    }
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " have now " << this->_armorDamageReduction << " armor and " << this->_hitPoints << " hit points" << std::endl;
    if (this->_hitPoints == 0)
    {
        std::cout << this->_name << " Died!! :(" << std::endl;
    }
}

void            ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " was repareid and received " << amount << " hit points " << std::endl;
    while(amount > 0)
    {
        if (this->_hitPoints < this->_maxHitPoints)
            this->_hitPoints++;
        amount--;
    }
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " have now " << this->_hitPoints << " hit points " << std::endl;
}
