/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 00:58:52 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/24 00:58:53 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap {

public:

    NinjaTrap( void );
    NinjaTrap( std::string name );
    NinjaTrap( NinjaTrap const & src );
    ~NinjaTrap();

    NinjaTrap &     operator=( NinjaTrap const & rhs );

    void            rangedAttack(std::string const & target) const;
    void            meleeAttack(std::string const & target) const;
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            ninjaShoebox( NinjaTrap const & target ) const;
    void            ninjaShoebox( FragTrap const & target ) const;
    void            ninjaShoebox( ScavTrap const & target ) const;
    void            ninjaShoebox( ClapTrap const & target ) const;

};

#endif
