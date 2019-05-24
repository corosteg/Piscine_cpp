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

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

public:

    NinjaTrap( void );
    NinjaTrap( std::string name );
    NinjaTrap( NinjaTrap const & src );
    ~NinjaTrap();

    NinjaTrap &     operator=( NinjaTrap const & rhs );

    void            ninjaShoebox( NinjaTrap const & target ) const;
    void            ninjaShoebox( FragTrap const & target ) const;
    void            ninjaShoebox( ScavTrap const & target ) const;
    void            ninjaShoebox( ClapTrap const & target ) const;

};

#endif
