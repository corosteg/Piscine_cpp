/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:39:03 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 18:39:04 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {

public:

    std::string     name;
    std::string     type;

    Zombie( std::string choosed_name, std::string choosed_type);
    // ~Zombie();

    void    announce();
};

#endif
