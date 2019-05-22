/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:07:45 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:07:46 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{}

Brain::~Brain( void )
{}

std::string Brain::identify() const {
    std::stringstream	ss;
	ss << (void *)this;
	std::string str = ss.str();
	return (str);
}
