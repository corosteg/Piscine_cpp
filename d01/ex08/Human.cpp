/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 18:54:56 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 18:54:57 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void    Human::meleeAttack(std::string const & target) {
    std::cout << "melee attack to " << target << std::endl;
}

void    Human::rangedAttack(std::string const & target) {
    std::cout << "ranged attack to " << target << std::endl;
}

void    Human::intimidatingShout(std::string const & target) {
    std::cout << "intimidation shout to " << target << std::endl;
}

void    Human::action(std::string const & action_name, std::string const & target) {
    typedef void (Human::*Actions)(std::string const & target);
    
    std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
    Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

    for (int i = 0; i < 3; i++)
    {
        if (actionsStr[i] == action_name)
        {
            (this->*(actions[i]))(target);
            break;
        }
    }
}
