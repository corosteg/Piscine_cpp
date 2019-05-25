/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:14:50 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 23:14:51 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H
#include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

    SuperMutant( void );
    SuperMutant( SuperMutant const & src );
    ~SuperMutant();

    SuperMutant &           operator=( SuperMutant const & rhs );

};

#endif
