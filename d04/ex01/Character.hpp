/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 01:56:11 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/25 01:56:12 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {

public:

    Character( void );
    Character(std::string const & name);
    Character( Character const & src );
    virtual ~Character();

    Character &             operator=( Character const & rhs );

    std::string const &     getName() const;
    AWeapon*                getWeapon() const;
    int                     getAp() const;
    void                    recoverAP();
    void                    equip(AWeapon*);
    void                    attack(Enemy*);

private:

    std::string             _name;
    int                     _ap;
    AWeapon*                _weapon;

};

std::ostream &           operator<<( std::ostream & o, Character const & i );

#endif
