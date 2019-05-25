/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:14:11 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:14:14 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy( 170, "Super Mutant" )
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & src )
{
    *this = src;
    return;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant &           SuperMutant::operator=( SuperMutant const & rhs )
{
    this->_type = rhs.getType();
    this->_hp = rhs.getHp();

    return *this;
}
