/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:43:44 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 19:44:00 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
#define PEON_H
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {

public:

    Peon(void);
    Peon( std::string name );
    Peon( Peon const & src );
    ~Peon();

    Peon &          operator=( Peon const & src );

    void            getPolymorphed() const;

};

#endif
