/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 01:42:09 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 01:42:10 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {

public:

    SuperTrap( void );
    SuperTrap( std::string name );
    SuperTrap( SuperTrap const & src );
    ~SuperTrap();

    SuperTrap &     operator=( SuperTrap const & rhs );

    void            test( void );

    // FragTrap::_hitPoints;

};

#endif
