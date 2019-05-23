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

ScavTrap::ScavTrap( void )
    : _name("unknown"),
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(50),
    _maxEnergyPoints(50),
    _level(1),
    _meleeAttackDamage(20),
    _rangedAttackDamage(15),
    _armorDamageReduction(3)
{
    std::cout << "Default constructor of ScavTrap is called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) 
    : _name(name),
    _hitPoints(100),
    _maxHitPoints(100),
    _energyPoints(50),
    _maxEnergyPoints(50),
    _level(1),
    _meleeAttackDamage(20),
    _rangedAttackDamage(15),
    _armorDamageReduction(3)
{
    std::cout << "Constructor of ScavTrap is called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "Destructor of ScavTrap is called" << std::endl;
}

ScavTrap &      ScavTrap::operator=( const ScavTrap & rhs ) {
    this->_name = rhs.getName();
    return *this;
}

std::string     ScavTrap::getName()  const {
    return this->_name;
}

int             ScavTrap::getHitPoints() const {
    return this->_hitPoints;
}

int             ScavTrap::getArmor() const {
    return this->_armorDamageReduction;
}

void            ScavTrap::rangedAttack(std::string const & target) const {
    std::cout << "FR4G-TP (Guardian of Door) " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void            ScavTrap::meleeAttack(std::string const & target) const {
    std::cout << "FR4G-TP (Guardian of Door) " << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void            ScavTrap::takeDamage(unsigned int amount) {
    std::cout << "FR4G-TP (Guardian of Door) " << this->_name << " received " << amount << " damage " << std::endl;
    while(amount > 0)
    {
        if (this->_armorDamageReduction > 0)
            this->_armorDamageReduction--;
        else if (this->_hitPoints > 0)
            this->_hitPoints--;
        amount--;
    }
    std::cout << "FR4G-TP (Guardian of Door) " << this->_name << " have now " << this->_armorDamageReduction << " armor and " << this->_hitPoints << " hit points" << std::endl;
    if (this->_hitPoints == 0)
    {
        std::cout << this->_name << " Died!! :(" << std::endl;
    }
}

void            ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP (Guardian of Door) " << this->_name << " was repareid and received " << amount << " hit points " << std::endl;
    while(amount > 0)
    {
        if (this->_hitPoints < this->_maxHitPoints)
            this->_hitPoints++;
        amount--;
    }
    std::cout << "FR4G-TP (Guardian of Door) " << this->_name << " have now " << this->_hitPoints << " hit points " << std::endl;
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
