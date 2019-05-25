/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:14:42 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:14:43 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_H
#define RADSCORPION_H
#include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

    RadScorpion( void );
    RadScorpion( RadScorpion const & src );
    ~RadScorpion();

    RadScorpion &           operator=( RadScorpion const & rhs );

};

#endif

