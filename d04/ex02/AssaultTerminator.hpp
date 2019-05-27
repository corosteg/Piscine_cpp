/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 13:57:20 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/25 13:57:21 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine{

public:

    AssaultTerminator( void );
    AssaultTerminator( AssaultTerminator const & src );
    ~AssaultTerminator();

    AssaultTerminator &     operator=( AssaultTerminator const & rhs );

    ISpaceMarine*           clone() const;
    void                    battleCry() const;
    void                    rangedAttack() const;
    void                    meleeAttack() const;

};

#endif
