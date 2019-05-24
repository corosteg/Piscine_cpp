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
