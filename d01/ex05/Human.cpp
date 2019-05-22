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

// Brain           Human::getBrain() {
//     return this->_brainRef;
// }

// const Brain*    Human::identify( ) {
//     return &this->_brainRef;
// }

void        Human::test() {
    std::cout << this->_brain.identify() << std::endl;
}
