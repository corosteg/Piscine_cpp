/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:14:28 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:14:31 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon {

public:

    AWeapon( void );
    AWeapon(std::string const & name, int apcost, int damage);
    AWeapon( AWeapon const & src );
    ~AWeapon();

    AWeapon &           operator=( AWeapon const & rhs );

    std::string const & getName() const;
    int                 getDamage() const;
    int                 getApCost() const;
    virtual void        attack() const = 0;

protected:

    std::string         _name;
    int                 _damage;
    int                 _apCost;

};

#endif
