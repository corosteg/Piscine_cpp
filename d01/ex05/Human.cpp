/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:07:48 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:07:49 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"
#include <iostream>

Human::Human() : _brain( Brain() )
{}

Human::~Human( void )
{}

const Brain&    Human::getBrain() {
    return this->_brain;
}

std::string     Human::identify( ) {
    return this->_brain.identify();
}
