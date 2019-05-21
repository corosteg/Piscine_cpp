/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:39:14 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 18:39:15 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int     main()
{
    // Zombie  zombie1 = Zombie("jack", "ghoul");
    ZombieEvent event;

    event.setZombieType("ghoul");
    Zombie*     zombie1 = event.newZombie("jack");

    return 0;
}