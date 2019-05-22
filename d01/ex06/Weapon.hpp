/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:07:33 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 15:07:35 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon {

    public:

        std::string     str;
        std::string&    ref;

        Weapon( std::string input );
        ~Weapon();

        std::string&    getType();
        void            setType( std::string str );

};

#endif
