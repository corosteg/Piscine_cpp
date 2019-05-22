/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:06:57 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:06:59 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon club ) : name(name), weapon(club)
{}

HumanA::~HumanA()
{}

void  HumanA::attack() {
  std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
