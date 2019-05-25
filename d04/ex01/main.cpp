/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:14:23 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:14:52 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int         main()
{
    PlasmaRifle     *plasma = new PlasmaRifle("Super plasma of the death");
    PowerFist       *power = new PowerFist("Powerfuul Powerfist");
    SuperMutant     *m = new SuperMutant();
    RadScorpion     *r = new RadScorpion();
    Character       *c = new Character("Zaz");

    std::cout << *c;
    c->attack(m);
    c->equip(power);
    c->attack(m);
    std::cout << *c;
    c->equip(plasma);
    c->attack(m);
    c->attack(m);
    c->attack(m);
    c->attack(m);
    c->attack(r);
    c->attack(r);
    c->attack(r);
    std::cout << *c;
    c->recoverAP();
    std::cout << *c;
    c->attack(r);
    c->attack(r);
    delete(r);

    std::cout << *c;
    c->equip(power);
    std::cout << *c;
    c->attack(r);
    delete(c);
    delete(m);
    delete(power);
    delete(plasma);

    return 0;    
}
