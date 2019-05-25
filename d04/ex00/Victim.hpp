/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:43:52 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 19:43:52 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
#define VICTIM_H
#include <iostream>

class Victim {

public:

    Victim( void );
    Victim( std::string name );
    Victim( Victim const & src );
    ~Victim();

    Victim &        operator=( Victim const & rhs );

    std::string     getName() const;
    virtual void    getPolymorphed() const;

protected:

    std::string     _name;

};

std::ostream &           operator<<( std::ostream & o, Victim const & i );

#endif
