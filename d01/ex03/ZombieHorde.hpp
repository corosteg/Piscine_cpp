/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:39:14 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 18:39:15 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H
#include "Zombie.hpp"

class ZombieHorde {

public:


    ZombieHorde( int N );
    ~ZombieHorde( void );

    void    announce();

private:

    Zombie*     _zombies;
    int         horde_size;

};

#endif
