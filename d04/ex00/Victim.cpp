/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:43:32 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 19:43:33 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{}

Victim::Victim( std::string name ) : _name(name)
{
    std::cout << "Some random victim called " << this->_name;
    std::cout << " just popped !" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << this->_name;
    std::cout << " just died for no apparent reason !" << std::endl;
}

Victim::Victim( Victim const & src )
{
    *this = src;

    return;
}

Victim &        Victim::operator=( Victim const & rhs )
{
    this->_name = rhs.getName();

    return *this;
}

std::string     Victim::getName() const
{
    return this->_name;
}

void            Victim::getPolymorphed() const
{
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}


std::ostream &          operator<<( std::ostream & o, Victim const & i )
{
    o << "I'm " << i.getName() <<" and I like otters !" << std::endl;

    return o;
}
