/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:39:40 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 18:39:41 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
#include "Zombie.hpp"

class ZombieEvent {
    
public:

    Zombie* newZombie(std::string name);
    void    randomChump();
    void    setZombieType( std::string type );

private:

    std::string     _type;

};

#endif
