/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 22:43:48 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/23 22:44:04 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class ClapTrap {

public:
    
    std::string     _name;

    ClapTrap( void );
    ClapTrap( std::string name );
    ClapTrap( ClapTrap const & src );
    ~ClapTrap();

    ClapTrap &      operator=( ClapTrap const & rhs );
    
    void            rangedAttack(std::string const & target) const;
    void            meleeAttack(std::string const & target) const;
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);


protected:

    std::string     _job;
    int             _hitPoints;
    int             _maxHitPoints;
    int             _energyPoints;
    int             _maxEnergyPoints;
    int             _level;
    int             _meleeAttackDamage;
    int             _rangedAttackDamage;
    int             _armorDamageReduction;

};

std::ostream &  operator<<( std::ostream & o, ClapTrap const & i);

#endif
