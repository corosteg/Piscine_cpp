/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:56:40 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/25 13:56:41 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src ){
    *this = src;

    std::cout << "* teleports from space *" << std::endl;
    return;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I’ll be back ..." << std::endl;
}

ISpaceMarine*           clone() const {
    return new AssaultTerminator(*this);
}

void                    battleCry() const {
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void                    rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void                    meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}
