/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:39:14 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 18:39:15 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int N ) : horde_size(N) {
    this->_zombies = new Zombie[N + 1];

    char  names[10][10] = {"Tom", "Bob", "Jack", "Henry", "Jim",
        "Paul", "Anna", "Patrik", "Jean", "Benoit"};


    for (int i = 0; i < N; i++) {
        srand(i);
        this->_zombies[i].name = names[ rand() % 10 ];
        this->_zombies[i].type = "ghoul";
    }
}

ZombieHorde::~ZombieHorde( void ) {
    delete [] this->_zombies;
    return;
}

void    ZombieHorde::announce() {
    for (int i = 0; i < this->horde_size; i++) {
        this->_zombies[i].announce();
    }
}
