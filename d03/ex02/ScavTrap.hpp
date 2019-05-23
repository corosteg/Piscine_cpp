/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 22:05:49 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/23 22:05:50 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( ScavTrap const & src );
    ~ScavTrap();

    ScavTrap &      operator=( ScavTrap const & rhs );

    void            challengeNewcomer();

};

std::ostream &  operator<<( std::ostream & o, ScavTrap const & i);

#endif
