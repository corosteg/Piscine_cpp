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

ClapTrap::ClapTrap( ClapTrap const & src )
{
    *this = src;

    return;
}

ClapTrap::~ClapTrap( void ) {
    std::cout << "Destructor of ClapTrap is called" << std::endl;
}

ClapTrap &      ClapTrap::operator=( const ClapTrap & rhs ) {
    this->_name = rhs._name;

    return *this;
}
