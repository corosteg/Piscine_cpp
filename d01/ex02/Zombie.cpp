/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:38:59 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 18:39:00 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( std::string choosed_name, std::string choosed_type) : name(choosed_name), type(choosed_type) {
    return;
}

void    Zombie::announce() {
    std::cout << '<' << this->name << " (" << this->type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
