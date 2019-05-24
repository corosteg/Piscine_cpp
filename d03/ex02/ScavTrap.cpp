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

ScavTrap::ScavTrap( ScavTrap const & src)
{
    *this = src;

    return;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "Destructor of ScavTrap is called" << std::endl;
}

ScavTrap &      ScavTrap::operator=( const ScavTrap & rhs ) {
    this->_name = rhs._name;
    return *this;
}

void            ScavTrap::rangedAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( " << this->_job << " ) " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void            ScavTrap::meleeAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void            ScavTrap::takeDamage(unsigned int amount) {
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

void            ScavTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " was repareid and received " << amount << " hit points " << std::endl;
    while(amount > 0)
    {
        if (this->_hitPoints < this->_maxHitPoints)
            this->_hitPoints++;
        amount--;
    }
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " have now " << this->_hitPoints << " hit points " << std::endl;
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
