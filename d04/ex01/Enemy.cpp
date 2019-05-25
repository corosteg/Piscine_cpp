/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:13:25 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:13:28 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _hp(hp)
{}

Enemy::Enemy( Enemy const & src )
{
    *this = src;

    return;
}

Enemy::~Enemy()
{}

Enemy &           Enemy::operator=( Enemy const & rhs )
{
    this->_type = rhs.getType();
    this->_hp = rhs.getHp();

    return *this;
}

std::string const & Enemy::getType() const
{
    return this->_type;
}

int                 Enemy::getHp() const
{
    return this->_hp;
}

void                Enemy::takeDamage( int dam )
{
    std::cout << this->_type << " Received " << dam << " of damage";
    if (dam < 0)
        return;
    while(dam > 0 && this->_hp > 0)
    {
        this->_hp--;
        dam--;
    }
    if (this->_hp == 0)
    {
        std::cout << " he have now 0 hp is dying" << std::endl;
        return;
    }
    std::cout << " he have now " << this->_hp << " hp" << std::endl;
}
