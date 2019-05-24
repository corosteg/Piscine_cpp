/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 00:58:43 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 00:58:45 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap()
{
    this->_name = "unknown";
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    std::cout << "Default constructor of NinjaTrap is called" << std::endl;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    std::cout << "Constructor of NinjaTrap is called" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src )
{
    *this = src;

    return;
}

NinjaTrap &     NinjaTrap::operator=( NinjaTrap const & rhs )
{
    this->_name = rhs._name;
    return *this;
}

void            NinjaTrap::rangedAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( Fucking Ninja!! ) " << this->_name << " attacks " << target << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}

void            NinjaTrap::meleeAttack(std::string const & target) const {
    std::cout << "FR4G-TP ( Fucking Ninja!! ) "  << this->_name << " attacks " << target << " at melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void            NinjaTrap::takeDamage(unsigned int amount) {
    std::cout << "FR4G-TP ( Fucking Ninja!! ) "  << this->_name << " received " << amount << " damage " << std::endl;
    while(amount > 0)
    {
        if (this->_armorDamageReduction > 0)
            this->_armorDamageReduction--;
        else if (this->_hitPoints > 0)
            this->_hitPoints--;
        amount--;
    }
    std::cout << "FR4G-TP ( Fucking Ninja!! ) "  << this->_name << " have now " << this->_armorDamageReduction << " armor and " << this->_hitPoints << " hit points" << std::endl;
    if (this->_hitPoints == 0)
    {
        std::cout << this->_name << " Died!! :(" << std::endl;
    }
}

void            NinjaTrap::beRepaired(unsigned int amount) {
    std::cout << "FR4G-TP ( Fucking Ninja!! ) "  << this->_name << " was repareid and received " << amount << " hit points " << std::endl;
    while(amount > 0)
    {
        if (this->_hitPoints < this->_maxHitPoints)
            this->_hitPoints++;
        amount--;
    }
    std::cout << "FR4G-TP ( Fucking Ninja!! ) "  << this->_name << " have now " << this->_hitPoints << " hit points " << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Destructor of NinjaTrap is called" << std::endl;
}

void        NinjaTrap::ninjaShoebox( NinjaTrap const & target ) const
{
    std::cout << this->_name << " is talking with his ninja friend " << target._name << std::endl;
}

void        NinjaTrap::ninjaShoebox( ScavTrap const & target ) const
{
    std::cout << this->_name << " is playing football with his scavTrap friend " << target._name << std::endl;
}

void        NinjaTrap::ninjaShoebox( FragTrap const & target ) const
{
    std::cout << this->_name << " is drunking with his fragTrap friend " << target._name << std::endl;
}

void        NinjaTrap::ninjaShoebox( ClapTrap const & target ) const
{    
    std::cout << this->_name << " is taking a break with other Claptrap " << target._name << ", yeah because " << this->_name;
    std::cout << " is a Claptrap after all... " << std::endl;
}
