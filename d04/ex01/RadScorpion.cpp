/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:14:01 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:14:02 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy( 80, "RadScorpion" )
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & src )
{
    *this = src;
    return;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &           RadScorpion::operator=( RadScorpion const & rhs )
{
    this->_type = rhs.getType();
    this->_hp = rhs.getHp();

    return *this;
}
