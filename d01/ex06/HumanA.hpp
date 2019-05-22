/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:07:24 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:07:25 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
#include "Weapon.hpp"

class HumanA {

public:

    std::string   name;
    Weapon        weapon;

    HumanA( std::string name, Weapon club );
    ~HumanA();

    void  attack();

};

#endif
