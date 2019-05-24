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

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

public:

    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( FragTrap const & src );
    ~FragTrap();

    FragTrap &      operator=( FragTrap const & rhs );

    void            vaulthunter_dot_exe(std::string const & target);

};

std::ostream &  operator<<( std::ostream & o, FragTrap const & i);

#endif
