/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: corosteg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 18:06:41 by corosteg          #+#    #+#             */
/*   Updated: 2019/05/20 18:06:42 by corosteg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    print_in_uppercase(char *str)
{
    int     i;
    char    c;

    i = 0;
    while (str[i])
    {
        if (std::islower(str[i]))
        {
            c = std::toupper(str[i]);
            std::cout << c;
        }
        else
            std::cout << str[i];
        i++;
    }
}

void    megaphone(char **tab)
{
    int i;

    i = 1;

    while (tab[i])    
    {
        print_in_uppercase(tab[i]);
        i++;
    }
    std::cout << std::endl;
}

int     main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        megaphone(av);

    return 0;
}