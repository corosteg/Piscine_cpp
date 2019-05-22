/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:26:21 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/21 16:26:22 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Pony.hpp"

Pony::Pony( std::string name, std::string like, std::string where, bool male )
        : male(male), name(name), like(like), where(where) {
    
    if (this->male) {
        std::cout << "A pony born on the " << this->where << " his name is ";
        std::cout << this->name << " and he like " << this->like << std::endl;
    } else {
        std::cout << "A pony born on the " << this->where << " her name is ";
        std::cout << this->name << " and she like " << this->like << std::endl;
    }
    return;
}

Pony::~Pony( void ) {
    std::cout << name << " was killed " << std::endl;
    return;
}

Pony*    Pony::ponyOnTheHeap() {
    Pony*    pony1 = new Pony("Spike", "carrot", "heap", true);

    return pony1;
}

Pony    Pony::ponyOnTheStack() {
    Pony    pony2 = Pony("Pinkie Pie", "apple", "stack", false);

    return pony2;
}
