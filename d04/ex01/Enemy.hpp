/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:15:16 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:15:18 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {

public:

    Enemy( void );
    Enemy(int hp, std::string const & type);
    Enemy( Enemy const & src );
    virtual ~Enemy();

    Enemy &                 operator=( Enemy const & rhs );

    std::string const &     getType() const;
    int                     getHp() const;
    virtual void            takeDamage(int);

protected:

    std::string             _type;
    int                     _hp;

};

#endif
