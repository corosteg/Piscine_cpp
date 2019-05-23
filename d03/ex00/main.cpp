/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 17:51:27 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/23 17:51:41 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int         main()
{
    FragTrap        robot1 = FragTrap( "Henry" );
    FragTrap        robot2 = FragTrap( "Franck" );

    std::cout << "new FR4G-TP " << robot1.getName() << std::endl;
    std::cout << "FR4G-TP " << robot2.getName() << std::endl << std::endl;

    robot1.rangedAttack(robot2.getName());
    robot2.takeDamage(20);
    std::cout << std::endl;

    robot1.meleeAttack(robot2.getName());
    robot2.takeDamage(30);
    std::cout << std::endl;
    
    robot2.beRepaired(50);
    std::cout << std::endl;
    
    robot2.vaulthunter_dot_exe(robot1.getName());
    robot2.vaulthunter_dot_exe(robot1.getName());
    robot2.vaulthunter_dot_exe(robot1.getName());
    robot2.vaulthunter_dot_exe(robot1.getName());
    robot2.vaulthunter_dot_exe(robot1.getName());
    std::cout << std::endl << robot2 << std::endl;
    
    return 0;
}