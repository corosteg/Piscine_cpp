/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 18:55:06 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/22 18:55:07 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int     main()
{
    Human   human = Human();

    human.action("meleeAttack", "pony");
    human.action("rangedAttack", "pony");
    human.action("intimidatingShout", "pony");
}
