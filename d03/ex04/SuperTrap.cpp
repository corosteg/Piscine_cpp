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

SuperTrap::SuperTrap(void) : NinjaTrap(), FragTrap()
{
    std::cout << "Default constructor of SuperTrap is called" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name)
{
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

void            SuperTrap::test()
{
    std::cout << this->_name << std::endl;;
    std::cout << this->_maxEnergyPoints << std::endl;
}
