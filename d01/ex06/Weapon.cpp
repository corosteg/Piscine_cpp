/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:07:15 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:07:16 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string input ) : str(input), ref(str)
{}

Weapon::~Weapon()
{}

std::string&    Weapon::getType() {
    return this->ref;
}

void            Weapon::setType( std::string str ) {
    this->ref = str;
}
