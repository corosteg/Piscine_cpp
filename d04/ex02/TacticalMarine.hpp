/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:57:33 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/25 13:57:34 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine{

public:

    TacticalMarine( void );
    TacticalMarine( TacticalMarine const & src );
    ~TacticalMarine();

    TacticalMarine &     operator=( TacticalMarine const & rhs );

    ISpaceMarine*           clone() const;
    void                    battleCry() const;
    void                    rangedAttack() const;
    void                    meleeAttack() const;

};

#endif
