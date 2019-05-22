/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:07:07 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:07:11 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name)
{}

HumanB::~HumanB()
{}

void  HumanB::attack() {
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void  HumanB::setWeapon( Weapon new_weapon ) {
    this->weapon = &new_weapon;
}
