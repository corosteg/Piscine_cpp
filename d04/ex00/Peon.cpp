/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:43:17 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 19:43:20 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{}

Peon::Peon( std::string name ) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::Peon( Peon const & src )
{
    *this = src;

    return;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
    return;
}

Peon &          Peon::operator=( Peon const & rhs )
{
    this->_name = rhs.getName();

    return *this;
}

void            Peon::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
