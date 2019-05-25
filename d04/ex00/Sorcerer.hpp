/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:48:15 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 19:48:16 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
#define SORCERER_H
#include <iostream>
#include "Victim.hpp"

class Sorcerer {

public:

    Sorcerer( std::string name, std::string title );
    Sorcerer( Sorcerer const & src );
    ~Sorcerer();

   Sorcerer &           operator=( Sorcerer const & rhs );

    std::string         getName() const;
    std::string         getTitle() const;
    void                polymorph(Victim const & target) const;

private:

    Sorcerer( void );
    
    std::string         _name;
    std::string         _title;

};

std::ostream &           operator<<( std::ostream & o, Sorcerer const & i );

#endif
