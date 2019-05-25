/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:13:20 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:13:20 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const & name)
    : _name(name),
    _ap(40)
{}

Character::Character( Character const & src )
{
    *this = src;

    return;
}

Character::~Character()
{}

Character &           Character::operator=( Character const & rhs )
{
    this->_name = rhs.getName();
    this->_ap = rhs.getAp();

    return *this;
}

std::string const & Character::getName() const
{
    return this->_name;
}

AWeapon*            Character::getWeapon() const
{
    return this->_weapon;
}

int                 Character::getAp() const
{
    return this->_ap;
}

void                Character::recoverAP()
{
    int         ap = 40;

    while(this->_ap < 40 && ap > 0)
    {
        ap--;
        this->_ap++;
    }
}

void                Character::equip(AWeapon* weapon)
{
    this->_weapon = weapon;
    return;
}

void                Character::attack(Enemy* target)
{
    if (this->_weapon)
    {
        if (this->_ap - this->_weapon->getApCost() < 0)
            std::cout << "You need more ap for do that" << std::endl;
        else
        {
            target->takeDamage(this->_weapon->getDamage());
            this->_ap -= this->_weapon->getApCost();
        }
    }
    else
        std::cout << "Need weapon for do that :( " << std::endl;
}

std::ostream &      operator<<( std::ostream & o, Character const & i )
{
    if (i.getWeapon())
        o << i.getName() << " has " << i.getAp() << " AP and wields a" << i.getWeapon()->getName() << std::endl;
    else
        o << i.getName() << " has " << i.getAp() << " AP and is unarmed" << std::endl;

    return o;
}
