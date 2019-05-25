/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:14:36 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:14:38 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

    PlasmaRifle();
    PlasmaRifle( std::string name );
    PlasmaRifle( PlasmaRifle const & src );
    virtual ~PlasmaRifle();

    PlasmaRifle &           operator=( PlasmaRifle const & rhs );

    virtual void            attack() const;

};

#endif
