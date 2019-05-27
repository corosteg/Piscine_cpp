/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:56:54 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/25 13:56:55 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src ){
    *this = src;

    std::cout << "Tactical Marine ready for battle" << std::endl;
    return;
}

TacticalMarine::~TacticalMarine() {
    std::cout << "Aaargh ..." << std::endl;
}

ISpaceMarine*           clone() const {
    return new TacticalMarine(*this);
}

void                    battleCry() const {
    std::cout << "For the holy PLOT !" << std::endl;
}

void                    rangedAttack() const {
    std::cout << "* attacks with bolter *" << std::endl;
}

void                    meleeAttack() const {
    std::cout << "* attacks with chainsword *" << std::endl;
}
