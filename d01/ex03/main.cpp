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
#include "ZombieHorde.hpp"

void    test_leaks()
{
    ZombieHorde  zombies = ZombieHorde(10);

    zombies.announce();
}

int     main()
{
    test_leaks();
    
    return 0;
}