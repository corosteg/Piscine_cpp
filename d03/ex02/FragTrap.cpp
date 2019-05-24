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

FragTrap::FragTrap( void ): ClapTrap()
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

FragTrap::FragTrap( FragTrap const & src )
{
    *this = src;

    return;
}

FragTrap::~FragTrap( void ) {
    std::cout << "Destructor of FragTrap is called" << std::endl;
}

FragTrap &      FragTrap::operator=( const FragTrap & rhs ) {
    return *this;
}

void            FragTrap::rangedAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( " << this->_job << " ) " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void            FragTrap::meleeAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void            FragTrap::takeDamage(unsigned int amount) {
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

void            FragTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " was repareid and received " << amount << " hit points " << std::endl;
    while(amount > 0)
    {
        if (this->_hitPoints < this->_maxHitPoints)
            this->_hitPoints++;
        amount--;
    }
    std::cout << "FR4G-TP ( " << this->_job << " ) "  << this->_name << " have now " << this->_hitPoints << " hit points " << std::endl;
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
