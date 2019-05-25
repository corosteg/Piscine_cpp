/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:13:33 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:13:34 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon()
{}

PlasmaRifle::PlasmaRifle( std::string name ) : AWeapon( name, 5, 21 )
{}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src )
{
    *this = src;
    return;
}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle &           PlasmaRifle::operator=( PlasmaRifle const & rhs )
{
    this->_name = rhs.getName();
    this->_damage = rhs.getDamage();
    this->_apCost = rhs.getApCost();

    return *this;
}

void                    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
