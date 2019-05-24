/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 22:05:49 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/23 22:05:50 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class ScavTrap {

public:

    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( ScavTrap const & src );
    ~ScavTrap();

    ScavTrap &      operator=( ScavTrap const & rhs );

    std::string     getName() const;
    int             getHitPoints() const;
    int             getArmor() const;

    void            rangedAttack(std::string const & target) const;
    void            meleeAttack(std::string const & target) const;
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
    void            challengeNewcomer();


protected:

    std::string     _name;
    int             _hitPoints;
    int             _maxHitPoints;
    int             _energyPoints;
    int             _maxEnergyPoints;
    int             _level;
    int             _meleeAttackDamage;
    int             _rangedAttackDamage;
    int             _armorDamageReduction;

};

std::ostream &  operator<<( std::ostream & o, ScavTrap const & i);

#endif
