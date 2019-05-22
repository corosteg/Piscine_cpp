/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:39:09 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 18:39:10 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type) {
    this->_type = type;
    return;
}

Zombie*     ZombieEvent::newZombie(std::string name) {
    Zombie*  zombie = new Zombie(name, this->_type);

    return zombie;
}

void        ZombieEvent::randomChump() {
    char  names[10][10] = {"Tom", "Bob", "Jack", "Henry", "Jim",
        "Paul", "Anna", "Patrik", "Jean", "Benoit"};
    
    srand(time(NULL));
    Zombie*     zombie = this->newZombie(names[ rand() % 10]);
    zombie->announce();
    delete zombie;
}
