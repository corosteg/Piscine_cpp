/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:43:26 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 19:43:27 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( void ) 
{}

Sorcerer::Sorcerer( std::string name, std::string title ) 
    : _name(name),
    _title(title)
{
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src )
{
    *this = src;

    return;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->_name << ", " << this->_title;
    std::cout << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &              Sorcerer::operator=( Sorcerer const & rhs )
{
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();

    return *this;
}

std::string             Sorcerer::getName() const
{
    return this->_name;
}

std::string             Sorcerer::getTitle() const
{
    return this->_title;
}

void                    Sorcerer::polymorph(Victim const & target) const
{
    target.getPolymorphed();    
}

std::ostream &          operator<<( std::ostream & o, Sorcerer const & i )
{
    o << "I am " << i.getName() <<", " << i.getTitle() << ", and I like ponies !" << std::endl;

    return o;
}
