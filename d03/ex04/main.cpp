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
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int         main()
{
    ClapTrap        clapTrap;
    FragTrap        robot1 = FragTrap( "Henry" );
    FragTrap        robot2 = FragTrap( "Franck" );

    std::cout << "new FR4G-TP " << "Henry" << std::endl;
    std::cout << "new FR4G-TP " << "Franck" << std::endl << std::endl;

    robot1.rangedAttack("Franck");
    robot2.takeDamage(20);
    std::cout << std::endl;

    robot1.meleeAttack("Franck");
    robot2.takeDamage(30);
    std::cout << std::endl;
    
    robot2.beRepaired(50);
    std::cout << std::endl;
    
    robot2.vaulthunter_dot_exe("Henry");
    robot2.vaulthunter_dot_exe("Henry");
    robot2.vaulthunter_dot_exe("Henry");
    robot2.vaulthunter_dot_exe("Henry");
    robot2.vaulthunter_dot_exe("Henry");

    ScavTrap        guardian1 = ScavTrap( "Hodor" );
    ScavTrap        guardian2 = ScavTrap( "Tom" );
    std::cout << std::endl;
    
    std::cout << "new guardian FR4G-TP " << "Hodor" << std::endl;
    std::cout << "new guardian FR4G-TP " << "Tom" << std::endl << std::endl;

    guardian1.rangedAttack("Tom");
    guardian2.takeDamage(15);
    std::cout << std::endl;

    guardian1.meleeAttack("Tom");
    guardian2.takeDamage(20);
    std::cout << std::endl;
    
    guardian2.beRepaired(50);
    std::cout << std::endl;
    
    guardian2.challengeNewcomer();

    NinjaTrap       ninja1 = NinjaTrap("Naruto");
    std::cout << std::endl;

    ninja1.ninjaShoebox(robot1);
    ninja1.ninjaShoebox(guardian2);
    ninja1.ninjaShoebox(ninja1);
    ninja1.ninjaShoebox(clapTrap);

    std::cout << std::endl;

    return 0;
}