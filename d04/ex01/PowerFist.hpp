/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:15:23 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:15:24 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_H
#define POWERFIST_H
#include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

    PowerFist();
    PowerFist( std::string name );
    PowerFist( PowerFist const & src );
    virtual ~PowerFist();

    PowerFist &           operator=( PowerFist const & rhs );

    virtual void            attack() const;

};

#endif
