/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:13:54 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:13:55 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon()
{}

PowerFist::PowerFist( std::string name ) : AWeapon( name, 8, 50 )
{}

PowerFist::PowerFist( PowerFist const & src )
{
    *this = src;
    return;
}

PowerFist::~PowerFist()
{}

PowerFist &           PowerFist::operator=( PowerFist const & rhs )
{
    this->_name = rhs.getName();
    this->_damage = rhs.getDamage();
    this->_apCost = rhs.getApCost();

    return *this;
}

void                    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}


