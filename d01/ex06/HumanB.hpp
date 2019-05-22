/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:07:29 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:07:30 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H
#include "Weapon.hpp"

class HumanB {

public:

    std::string   name;
    Weapon*       weapon;

    HumanB( std::string name );
    ~HumanB();

    void  setWeapon( Weapon new_weapon );
    void  attack();

};

#endif
