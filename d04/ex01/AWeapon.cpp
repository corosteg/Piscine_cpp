/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:13:10 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:13:11 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
    : _name(name),
    _damage(damage),
    _apCost(apcost)
{}

AWeapon::AWeapon( AWeapon const & src )
{
    *this = src;

    return;
}

AWeapon::~AWeapon()
{}

AWeapon &           AWeapon::operator=( AWeapon const & rhs )
{
    this->_name = rhs.getName();
    this->_damage = rhs.getDamage();
    this->_apCost = rhs.getApCost();

    return *this;
}

std::string const & AWeapon::getName() const
{
    return this->_name;
}

int                 AWeapon::getDamage() const
{
    return this->_damage;
}

int                 AWeapon::getApCost() const
{
    return this->_apCost;
}
