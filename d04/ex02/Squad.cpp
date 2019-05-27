/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:56:46 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/25 13:56:48 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.hpp.hpp"

class TacticalMarine : public ISquad {

public:

    TacticalMarine( void );
    TacticalMarine( TacticalMarine const & src );
    ~TacticalMarine();

    TacticalMarine &     operator=( TacticalMarine const & rhs );

    int             getCount() const = 0;
    ISpaceMarine*   getUnit(int) const = 0;
    int             push(ISpaceMarine*) = 0;

};

#endif

