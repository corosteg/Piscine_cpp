/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:51:33 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/23 17:51:34 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( FragTrap const & src );
    ~FragTrap();

    FragTrap &      operator=( FragTrap const & rhs );

    void            rangedAttack(std::string const & target) const;
    void            meleeAttack(std::string const & target) const;
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            vaulthunter_dot_exe(std::string const & target);

};

#endif
